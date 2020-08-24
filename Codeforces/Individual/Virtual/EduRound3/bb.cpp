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
	ll n, m;
	cin >> n >> m;
	vector<ll> um(11);
	for(int i = 0; i < n; ++i) {
		ll x;
		cin >> x;
		um[x]++;
	}
	ll ans = 0;
	for(int i = 1; i <= 10; ++i) {
		for(int j = i + 1; j <= 10; ++j) {
			ans += um[i] * um[j];
		}
	}
	cout << ans << '\n';
	return 0;
}