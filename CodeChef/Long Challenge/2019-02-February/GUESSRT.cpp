#include <bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "The value of \"" << #x << "\" is " << x << '\n'

typedef long long int ll;

const ll MOD = 1e9 + 7;

ll power(ll x, ll y) {
	ll res = 1ll;
	x = x % MOD;
	while(y > 0) {
		if(y & 1ll) res = (res * x) % MOD;
		y /= 2;
		x = (x * x) % MOD;
	}
	return res % MOD;
}

ll modInverse(ll a) {
	return power(a, MOD - 2);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		ll n, k, m;
		cin >> n >> k >> m;
		ll num = (m % 2 == 0)? m / 2: (m + 1) / 2;

		ll nSub = power(n, num);
		ll nMinus = power(n - 1, num);

		ll ans = (nSub - nMinus + MOD) % MOD;
		ans = (ans * modInverse(nSub)) % MOD;

		if(m % 2 == 0) {
			ll value = ((n - 1) * modInverse(n)) % MOD
			value = power(value, num);
			value = (value * modInverse(n + k)) % MOD;
			ans = (ans + value) % MOD;
		}
		cout << ans << endl;
	}
	return 0;
}