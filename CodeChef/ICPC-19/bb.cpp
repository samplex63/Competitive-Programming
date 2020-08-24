#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
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
		map<string, pair<int, int>> m;
		for(int i = 0; i < n; ++i) {
			string s;
			int val;
			cin >> s >> val;
			val? m[s].se++: m[s].fi++;
		}
		int ans = 0;
		for(auto x: m) {
			ans += max(x.se.fi, x.se.se);
		}
		cout << ans << '\n';
	}
	return 0;
}