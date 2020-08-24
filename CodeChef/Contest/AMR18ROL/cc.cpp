#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int) (x).size()

typedef long long ll;
typedef long double ld;

inline ll gcd(ll a, ll b) {
	if(b == 0) return a;
	return gcd(b, a % b);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		vector<ll> vec(n);
		for(int i = 0; i < n; ++i) {
			cin >> vec[i];
		}
		ll low, up;
		cin >> low >> up;
		bool flag = true;
		auto lcm = [&](ll a, ll b) {
			if(a == -1ll) return -1ll;
			ll ret = a * (b / gcd(a, b));
			if(ret > up || ret < 0) {
				flag = false;
				return -1ll;
			}
			return ret;
		};
		ll ok = 1ll;
		for(int i = 0; i < n && flag; ++i) {
			ok = lcm(ok, vec[i]);
		}
		// cerr << flag << ' ' << ok << '\n';
		ll ans = 0ll;
		if(flag) {
			ans = up / ok - (low - 1) / ok;
		}
		cout << up - low - ans + 1 << '\n';
	}
	return 0;
}