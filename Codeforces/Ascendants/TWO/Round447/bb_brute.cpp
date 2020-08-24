#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

template<class T> bool cmn(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool cmx(T &a, T b) { return a < b ? (a = b, true) : false; }

const ll mod = 1000000007;
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
	ll n, m, k;
	cin >> n >> m >> k;
	if((n & 1) ^ (m & 1) && k == -1) {
		cout << "0\n";
		return 0;
	}
	cout << power(power(2ll, n - 1), m - 1) << '\n';
	return 0;
}