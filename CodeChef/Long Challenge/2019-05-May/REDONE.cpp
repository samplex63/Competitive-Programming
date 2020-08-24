#include <bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "\"" << (#x) << "\" = " << (x) << '\n'
typedef long long ll;

const ll mod = (ll) 1e9 + 7;
unordered_map<ll, ll> um;

ll solve(ll n) {
	if(um.count(n)) {
		return um[n];
	}
	um[n] = ((solve(n - 1) + n) % mod) + ((solve(n - 1) * n) % mod);
	um[n] %= mod;
	return um[n];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	um[1LL] = 1LL;
	while(tt--) {
		ll n;
		cin >> n;
		cout << solve(n) << '\n';
	}
	return 0;
}