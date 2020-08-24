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
		int a, b, c, d, k;
		cin >> a >> b >> c >> d >> k;
		int ans1 = ceil((double) a / c), ans2 = ceil((double) b / d);
		if(ans1 + ans2 <= k) {
			cout << ans1 << ' ' << ans2 << '\n';
		} else {
			cout << "-1\n";
		}
	}
	return 0;
}