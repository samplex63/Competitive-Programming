#include <bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "The value of \"" << #x << "\" is " << x << '\n'
typedef long long ll;

const ll mod = (ll) 1e9 + 7;

ll fastExpo(ll n, ll p) {
	ll sub = 1;
	n %= mod;

	while(p > 0) {
		if(p % 2 == 1) {
			sub *= n;
			sub %= mod;
		}
		p /= 2;
		n *= n;
		n %= mod;
	}
	return sub;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif

	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		vector<ll> vec(n + 1);
		for(auto &x: vec) {
			cin >> x;
		}

		ll imp = n;

		ll ans = 0;

		
	}
	return 0;
}