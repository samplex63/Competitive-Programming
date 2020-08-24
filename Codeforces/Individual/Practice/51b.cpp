#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())

typedef long long ll;
typedef long double ld;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string sub, inp = "";
	while(cin >> sub) {
		inp += sub;
	}
	sub = "";
	for(int i = 0; i < (int) inp.size(); ++i) {
		if(sub[i] == 'a') {
			sub[i - 2] == '/' ? sub += "A": sub += "a";
		} else if(sub[i] == 'r') {
			sub[i - 2] == '/' ? sub += "R": sub += "r";
		} else if(sub[i] == 'd') {
			sub[i - 2] == '/' ? sub += "D": sub += "d";
		}
	}
	// cerr << sub << '\n';
	vector<int> st, ans;
	for(int i = 0; i < sz(sub); ++i) {
		if(sub[i] == 'a') {
			st.push_back(0);
		} else if(sub[i] == 'A') {
			ans.push_back(st.back());
			st.pop_back();
		} else if(sub[i] == 'd') {
			st[sz(st) - 1]++;
		}
	}
	sort(ans.begin(), ans.end());
	for(auto x: ans) cout << x << ' ';
	cout << '\n';
	return 0;
}