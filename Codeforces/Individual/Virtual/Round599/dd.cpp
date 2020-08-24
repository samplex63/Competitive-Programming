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

	#ifdef LOCAL
	freopen("in", "r", stdin);
	#endif
	ll n;
	cin >> n;
	vector<ll> fac;
	for(ll i = 2; i <= sqrt(n); ++i) {
		if(n % i == 0) {
			fac.emplace_back(i);
			while(n % i == 0) n /= i;
		}
	}
	if(n != 1) fac.emplace_back(n);
	if(sz(fac) == 1) cout << fac[0] << '\n';
	else cout << 1 << '\n';

	return 0;
}