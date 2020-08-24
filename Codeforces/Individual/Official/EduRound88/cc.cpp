#include <bits/stdc++.h>
using namespace std;

#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second

using ll = long long;
using ld = long double;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--) {
		ld h, c, t;
		cin >> h >> c >> t;
		if(t <= (h + c) / 2) {
			cout << 2 << '\n';
			continue;
		}
		ll l = 0, r = ll(1e18);
		auto getVal = [&](ll go) { return abs(ld(t) - ld(h - (h - c) * (ld(go) / (2 * go + 1)))); };
		while(l < r) {
			ll mid = l + (r - l) / 2;
			(getVal(mid) - getVal(mid + 1) < 1e-14) ? r = mid : l = mid + 1;
		}
		cout << (getVal(l) - getVal(r) < 1e-14 ? 2 * l + 1 : 2 * r + 1) << '\n';
	}
	return 0;
}