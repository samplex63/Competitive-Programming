#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll n;
	cin >> n;
	vector<ll> vec(n);
	ll num = 0, zero = 0;
	for(auto& x: vec) {
		cin >> x;
		if(x < 0) num++;
		if(x == 0) zero++;
	}

	ll ans = 0;
	for(auto x: vec) {
		if(x < 0) {
			ans += (-x - 1);
		} else if(x > 0) {
			ans += (x - 1);
		} else ans++;
	}
	if(num & 1ll) {
		if(zero == 0) {
			ans += 2;
		}
	}
	cout << ans << '\n';
	return 0;
}