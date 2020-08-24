#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

template<class T> bool cmn(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool cmx(T &a, T b) { return a < b ? (a = b, true) : false; }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<string> vec(n);
	for(auto& x: vec) cin >> x;
	auto isBeaut = [&](const string& s) {
		bool flag = s[0] == '1';
		for(int i = 1; i < sz(s); ++i) {
			flag &= s[i] == '0';
		}
		return flag;
	};
	if(find(all(vec), "0") != vec.end()) {
		cout << 0 << '\n';
		return 0;
	}
	int pow = 0;
	string st = "1";
	for(int i = 0; i < n; ++i) {
		if(isBeaut(vec[i])) {
			// cerr << i << '\n';
			pow += sz(vec[i]) - 1;
		} else {
			st = vec[i];
		}
	}
	cout << st << string(pow, '0') << '\n';
	return 0;
}