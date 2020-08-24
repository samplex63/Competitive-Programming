#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

const ll mod = 998244353ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	ll ans = 0ll;
	for(int i = 0; i < n; ++i) {
		ll x;
		cin >> x;
		ll k = 1ll;
		while(x > 0) {
			ans += (((x % 10ll) * 11 * n) % mod) * k;
			ans %= mod;
			x /= 10;
			k *= 100;
			k %= mod;
		}
	}
	cout << ans << '\n';

	return 0;
}