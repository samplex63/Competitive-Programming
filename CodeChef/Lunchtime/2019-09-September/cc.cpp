#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) (int) (x).size()

typedef long long ll;
typedef long double ld;

typedef pair<int, int> pi;
typedef pair<ll, ll> pl;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--) {
		ll n, q;
		cin >> n >> q;
		vector<ll> vec(n);
		for(int i = 1; i < n; ++i) {
			cin >> vec[i];
		}
		vector<ll> m(n);
		m[0] = 0ll;
		for(int i = 1; i < n; ++i) {
			if(i & 1) m[i] = m[i - 1] + vec[i];
			else m[i] = m[i - 1] - vec[i];
		}

		// for(auto x: m) cerr << x << ' ';
		for(int qq = 0; qq < q; ++qq) {
			ll l, r;
			cin >> l >> r;
			if(l > r) swap(l, r);
			if((r - l) % 2 != 0) {
				ll ans = m[r - 1] - m[l - 1];
				if(l % 2 == 0) ans = -ans;
				cout << ans << '\n';
			} else {
				cout << "UNKNOWN\n";
			}
		}
	}
	return 0;
}