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
	int tt;
	cin >> tt;
	while(tt--) {
		string inp;
		cin >> inp;
		int n = sz(inp);
		vector<int> pref0(n), pref1(n);
		for(int i = 0; i < n; ++i) {
			if(inp[i] == '0') pref0[i] = 1;
			else pref1[i] = 1;
		}
		for(int i = 1; i < n; ++i) {
			pref0[i] += pref0[i - 1];
			pref1[i] += pref1[i - 1];
		}
		int ans = min(pref0[n - 1], pref1[n - 1]);
		for(int i = 1; i < n; ++i) {
			cmn(ans, pref1[i - 1] + (pref0[n - 1] - pref0[i]));
			cmn(ans, pref0[i - 1] + (pref1[n - 1] - pref1[i]));
		}
		cout << ans << '\n';
	}
	return 0;
}