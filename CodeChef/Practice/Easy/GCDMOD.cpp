#include <bits/stdc++.h>
using namespace std;

#define DEBUG(x) cerr << (#x) << " = " << (x) << '\n'
const long long mod = (long long) 1e9 + 7;

long long gcd(long long a, long long b) {
	if(a == 0) return b;
	return gcd(b % a, a);
}

long long fastExponent(long long x, long long y, long long mod_sub = mod) {
	long long res = 1ll;
	x = x % mod_sub;
	while(y > 0) {
		if(y & 1ll) {
			res = ((__int128)res * x) % mod_sub;
		}
		y >>= 1;
		x = ((__int128)x * x) % mod_sub;
	}
	return res % mod_sub;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		long long n, a, b;
		cin >> a >> b >> n;
		if(a == b) {
			long long aexp = fastExponent(a, n);
			aexp = (aexp * 2ll) % mod;
			cout << aexp << '\n';
		} else {
			long long aexp = (fastExponent(a, n, abs(a - b)) + fastExponent(b, n, abs(a - b))) % abs(a - b);
			cout << __gcd(aexp, abs(a - b)) << '\n';
		}
	}
	return 0;
}