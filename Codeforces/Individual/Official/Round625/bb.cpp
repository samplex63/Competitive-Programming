#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())

using ll = long long;
using ld = long double;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	map<int, ll> m;
	for(int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		m[x - i] += x;
	}
	ll ans = 0;
	for(auto x : m) {
		ans = max(x.se, ans);
	}
	cout << ans << '\n';
	return 0;
}