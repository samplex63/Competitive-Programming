#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())

typedef long long ll;
typedef long double ld;

ll gcdExtended(ll a, ll b, ll &x, ll &y) {
	if(a == 0) {
		x = 0;
		y = 1;
		return b;
	}
	ll x1, y1;
	ll gcd = gcdExtended(b % a, a, x1, y1);
	x = y1 - (b / a) * x1;
	y = x1;
	return gcd;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll a, b, c, x, y;
	cin >> a >> b >> c;
	ll gcd = gcdExtended(a, b, x, y);
	// cerr << gcd << '\n';
	if(c % gcd == 0) {
		cout << -c / gcd * x << ' ' << -c / gcd * y;
	} else {
		cout << -1;
	}
	return 0;
}