#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) (int) (x).size()

typedef long long ll;
typedef long double ld;

bool isNum(string& s) {
	if(s.empty()) return false;
	if(s.front() == '0') return sz(s) == 1;
	return find_if(s.begin(), s.end(), [] (char s) { return !isdigit(s); }) == s.end();
}

vector<string> spilt(const string& s, const string& del) {
	string spilt_this = s;
	vector<string> ret;
	int pos = 0;
	while((pos = spilt_this.find(del)) != -1) {
		ret.push_back(spilt_this.substr(0, pos));
		spilt_this.erase(0, pos + sz(del));
	}
	ret.push_back(spilt_this);
	return ret;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string inp;
	cin >> inp;
	vector<string> comma = spilt(inp, ","), ans1, ans2;
	vector<string> fin;
	for(auto x: comma) {
		vector<string> t = spilt(x, ";");
		for(auto x: t) {
			fin.push_back(x);
		}
	}
	for(int i = 0; i < sz(fin); ++i) {
		if(isNum(fin[i])) {
			ans1.push_back(fin[i]);
		} else {
			ans2.push_back(fin[i]);
		}
	}
	if(ans1.empty()) {
		cout << "-\n";
	} else {
		cout << '\"' << ans1[0];
		for(int i = 1; i < sz(ans1); ++i) {
			cout << "," << ans1[i];
		}
		cout << "\"\n";
	}
	if(ans2.empty()) {
		cout << "-\n";
	} else {
		cout << '\"' << ans2[0];
		for(int i = 1; i < sz(ans2); ++i) {
			cout << "," << ans2[i];
		}
		cout << "\"\n";
	}
	return 0;
}