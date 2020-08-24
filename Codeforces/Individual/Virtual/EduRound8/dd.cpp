#include <bits/stdc++.h>
using namespace std;

#define sz(x) static_cast<int>((x).size())

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

template<class T> inline bool cmn(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> inline bool cmx(T &a, T b) { return a < b ? (a = b, true) : false; }

const ll mod = (ll) 1e9 + 7;
ll power(ll x, ll y, ll mod_sub = mod) {
	ll res = 1ll;
	x = x % mod_sub;
	while(y > 0) {
		if(y & 1ll) res = (res * x) % mod_sub;
		y >>= 1;
		x = (x * x) % mod_sub;
	}
	return res % mod_sub;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int m, d;
	string a, b;
	cin >> m >> d >> a >> b;

	return 0;
}