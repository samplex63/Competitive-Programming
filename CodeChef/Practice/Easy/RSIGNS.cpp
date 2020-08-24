#include <bits/stdc++.h>
using namespace std;

#define DEBUG(x) cerr << (#x) << " = " << (x) << '\n'
const long long mod = (long long) 1e9 + 7;

long long fastExponent(long long x, long long y, long long mod_sub = mod) {
	long long res = 1ll;
	x = x % mod_sub;
	while(y > 0) {
		if(y & 1ll) {
			res = (res * x) % mod_sub;
		}
		y /= 2;
		x = (x * x) % mod_sub;
	}
	return res % mod_sub;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		long long k;
		cin >> k;
		cout << (fastExponent(2ll, k) * 5) % mod << '\n';
	}
	return 0;
}