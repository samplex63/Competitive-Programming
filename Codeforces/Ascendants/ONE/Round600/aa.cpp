#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())

typedef long long ll;
typedef long double ld;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifdef LOCAL
	freopen("in", "r", stdin);
	#endif
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<int> a(n), b(n), c(n, 0);
		for(int i = 0; i < n; ++i) cin >> a[i];
		for(int i = 0; i < n; ++i) cin >> b[i];

		for(int i = 0; i < n; ++i) {
			c[i] = b[i] - a[i];
		}
		c.erase(unique(c.begin(), c.end()), c.end());
		c.erase(remove(c.begin(), c.end(), 0), c.end());
		if(c[sz(c) / 2] < 0) {
			cout << "NO\n";
			continue;
		}
		cout << ((sz(c) <= 1)? "YES": "NO") << '\n';
	}

	return 0;
}