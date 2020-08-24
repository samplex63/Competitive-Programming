#include <bits/stdc++.h>
using namespace std;

long long int LCM(long long int a, long long int b) {
	return ((a * b) / __gcd(a, b));
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		long long int n, a, b, k;
		cin >> n >> a >> b >> k;
		long long int ans = 0;
		ans += (n / a);
		ans += (n / b);
		ans -= (2 * (n / LCM(a, b)));
		cerr << ans << '\n';
		cout << (ans >= k? "Win\n": "Lose\n");
	}
	return 0;
}