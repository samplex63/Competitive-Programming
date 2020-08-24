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
	int tt;
	cin >> tt;
	while(tt--) {
		int a, b;
		cin >> a >> b;
		int ans = abs(a - b) / 5;
		// cerr << ans << '\n';
		ans += ceil((double) (abs(a - b) % 5) / 2);
		cout << ans << '\n';
	}
	return 0;
}