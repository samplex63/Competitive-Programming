#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll n, l, r;
	cin >> n >> l >> r;

	vector<ll> vec(n, 1ll);
	for(ll i = 1; i < l; ++i) {
		vec[i] = pow(2ll, i);
	}
	cout << accumulate(vec.begin(), vec.end(), 0ll) << ' ';
	fill(vec.begin(), vec.end(), 1);
	for(ll i = 1; i < r; ++i) {
		vec[i] = pow(2ll, i);
	}
	for(ll i = r; i < n; ++i) {
		vec[i] = vec[i - 1];
	}
	cout << accumulate(vec.begin(), vec.end(), 0ll) << '\n';
	return 0;
}