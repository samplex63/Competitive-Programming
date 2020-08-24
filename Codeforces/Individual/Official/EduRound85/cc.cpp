#include <bits/stdc++.h>
using namespace std;

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
		int n;
		cin >> n;
		vector<ll> a(n), b(n), hts(n);
		for(int i = 0; i < n; ++i) {
			cin >> a[i] >> b[i];
		}
		ll req = 0;
		for(int i = 0; i < n; ++i) {
			hts[i] = max(0ll, a[i] - b[(i + n - 1) % n]);
			req += hts[i];
		}
		debug(hts);
		ll ans = (ll) 1e18;
		for(int i = 0; i < n; ++i) {
			cmn(ans, req - hts[i] + a[i]);
		}
		cout << ans << '\n';
	}
	return 0;
}