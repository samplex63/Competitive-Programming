#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

unordered_map<ll, ll> m;

ll coin(ll n) {
	if(n == 0 || n == 1) {
		return n;
	}
	if(m.count(n)) {
		return m[n];
	}
	m[n] = max(n, coin(n / 2) + coin(n / 3) + coin(n / 4));
	return m[n];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif

	ll n;
	while(cin >> n) {
		cout << coin(n) << '\n';
	}
	return 0;
}