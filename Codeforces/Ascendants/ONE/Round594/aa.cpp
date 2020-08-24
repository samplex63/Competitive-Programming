#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int) (x).size()

typedef long long ll;
typedef long double ld;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		int o_e = 0, o_o = 0;
		for(int i = 0; i < n; ++i) {
			int x;
			cin >> x;
			(x & 1)? o_e++: o_o++;
		}
		int m;
		cin >> m;
		ll ans = 0;
		for(int i = 0; i < m; ++i) {
			int x;
			cin >> x;
			if(x & 1) {
				ans += o_e;
			} else {
				ans += o_o;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}