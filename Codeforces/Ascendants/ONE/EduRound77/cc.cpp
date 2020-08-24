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
	int tt;
	cin >> tt;
	while(tt--) {
		ll a, b, k;
		cin >> a >> b >> k;
		if(a < b) swap(a, b);
		ll des = a + b - __gcd(a, b);
		des /= a;
		cout << ((des <= k)? "OBEY": "REBEL") << '\n';
	}
	return 0;
}