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
		int a = INT_MIN, b = INT_MAX;
		for(int i = 0; i < n; ++i) {
			int x, y;
			cin >> x >> y;
			a = max(a, x);
			b = min(b, y);
		}
		cout << max(0, a - b) << '\n';
	}

	return 0;
}