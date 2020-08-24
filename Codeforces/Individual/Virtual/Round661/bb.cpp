#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

template<class T> bool uin(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool uax(T &a, T b) { return a < b ? (a = b, true) : false; }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		vector<int> can(n), org(n), rc(n), ro(n);
		for(int& x: can) cin >> x;
		for(int& x: org) cin >> x;
		int mcan = *min_element(all(can));
		int morg = *min_element(all(org));
		ll ans = 0;
		for(int i = 0; i < n; ++i) {
			rc[i] = can[i] - mcan;
			ro[i] = org[i] - morg;
			ans += max(rc[i], ro[i]);
		}
		cout << ans << '\n';
	}
	return 0;
}