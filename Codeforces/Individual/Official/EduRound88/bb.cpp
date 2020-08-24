#include <bits/stdc++.h>
using namespace std;

#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second

using ll = long long;
using ld = long double;

template<class T> bool cmn(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool cmx(T &a, T b) { return a < b ? (a = b, true) : false; }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--) {
		int n, m;
		ll x, y;
		cin >> n >> m >> x >> y;
		// cerr << n << ' ' << m << ' ' << x << ' ' << y << '\n';
		vector<string> vec(n);
		for(int i = 0; i < n; ++i) cin >> vec[i];
		ll ans = 0;
		for(int i = 0; i < n; ++i) {
			int st = 0;
			int len = 0;
			while(st < m) {
				if(vec[i][st] == '.') {
					len++;
				} else {
					ans += min(x * len, y * (len / 2) + (len % 2 == 1 ? x : 0));
					len = 0;
				}
				st++;
			}
			ans += min(x * len, y * (len / 2) + (len % 2 == 1 ? x : 0));
			// cerr << len << ' ' << ans << ' ' << i << '\n';
		}
		cout << ans << '\n';
	}
	return 0;
}