#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

const ll mod = (ll) 1e9 + 7;

ll fastExponent(ll x, ll y, ll mod_sub = mod) {
	ll res = 1ll;
	x = x % mod_sub;
	while(y > 0) {
		if(y & 1ll) {
			res = (res * x) % mod_sub;
		}
		y >>= 1;
		x = (x * x) % mod_sub;
	}
	return res % mod_sub;
}

//Modulo Mutliplicative Inverse
ll modInverse(long long a) {
	return fastExponent(a, mod - 2);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll n, l, r;
	cout << modInverse(3) << '\n';

	return 0;
}