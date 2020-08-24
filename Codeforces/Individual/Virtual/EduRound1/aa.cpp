#include <bits/stdc++.h>
using namespace std;

#define first fi
#define second se
#define sz(x) (int) (x).size()

typedef long long ll;
typedef long double ld;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--) {
		ll n;
		cin >> n;
		ll ans = 1;
		if(n & 1ll) {
			ans *= (n + 1) / 2;
			ans *= n;
		} else {
			ans *= n / 2;
			ans *= n + 1;
		}
		ll minu = 0;
		for(ll i = 0; (ll) pow(2ll, i) <= n; i++) {
			minu -= (ll) pow(2ll, i);
		}
		// cerr << ans << ' ' << minu << '\n';
		cout << ans + 2ll * minu << '\n';
	}
	return 0;
}