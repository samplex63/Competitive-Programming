#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

ll gcd(ll a , ll b) {
   if(b == 0) return a;
   a %= b;
   return gcd(b, a);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll n, m;
	int q;
	cin >> n >> m >> q;
	ll g = gcd(n, m);
	while(q--) {
		ll a1, b1, a2, b2;
		cin >> a1 >> b1 >> a2 >> b2;
		ll com1, com2;
		if(a1 == 1ll) {
			com1 = ceil((long double) b1 / (n / g));
		} else {
			com1 = ceil((long double) b1 / (m / g));
		}

		if(a2 == 1ll) {
			com2 = ceil((long double) b2 / (n / g));
		} else {
			com2 = ceil((long double) b2 / (m / g));
		}
		cout << ((com1 == com2)? "YES": "NO") << '\n';
	}

	return 0;
}