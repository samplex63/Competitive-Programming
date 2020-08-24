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

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--) {
		ll a, b;
		cin >> a >> b;
		if(a == b) {
			cout << 0 << '\n';
			continue;
		}
		auto isPow2 = [&](ll val) {
			return !(val & (val - 1));
		};
		// auto logval = [&](ll val, int gd) {
		// 	if(val == 0) return 0;
		// 	return int(log(val) / log(gd));
		// };
		ll one = max(a, b);
		ll two = min(a, b);
		if(one % two == 0 && isPow2(one / two)) {
			ll val = one / two;
			int ans = int(log2(val));
			int sub = 0;
			while(ans >= 3) {
				sub++;
				ans -= 3;
			}
			if(ans >= 2) {
				sub++;
				ans -= 2;
			}
			cout << sub + ans << '\n';
		} else {
			cout << -1 << '\n';
		}
	}
	return 0;
}