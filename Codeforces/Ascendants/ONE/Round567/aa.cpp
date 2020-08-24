#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int) (x).size()

typedef long long ll;
typedef long double ld;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll a, b, c;
	cin >> a >> b >> c;
	ll ans = a + b;
	ans /= c;
	ll tr;
	if(a % c + b % c < c) {
		tr = 0;
	} else tr = c - max(a % c, b % c);
	cout << ans << ' ' << tr << '\n';
	return 0;
}