#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	ll bit;
	cin >> n >> bit;
	bit *= 8ll;
	bit /= n;
	bit = floor(bit);
	if(bit > 20) bit = n;
	else bit = 1ll << bit;

	map<ll, ll> m;
	for(int i = 0; i < n; ++i) {
		ll x;
		cin >> x;
		m[x]++;
	}

	vector<ll> times;
	for(auto x: m) {
		times.push_back(x.second);
	}

	sort(times.rbegin(), times.rend());

	ll ans = 0ll;
	for(int i = bit; i < (int) times.size(); ++i) {
		ans += times[i];
	}
	cout << ans << '\n';
	return 0;
}