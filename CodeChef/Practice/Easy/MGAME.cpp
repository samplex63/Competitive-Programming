#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif

	int t;

	cin >> t;
	while(t--) {
		LL n, p;
		cin >> n >> p;
		LL m = (n % 2 == 0)? n / 2 - 1: n / 2;
		unsigned int f = 12;
		int f2 = 12;
		if(f2 != f) {
			cerr << "AOOOO\n\n";
		}

		if(n == 1 || n == 2 || p == 1) {
			cout << (p * p * p) << '\n';
			continue;
		}

		LL ans = 0;
		LL diff = p - m;
		ans += (diff * diff);
		LL diff2 = p - n;
		ans += (diff2 * diff);
		ans += (diff2 * diff2);
		cout << ans << '\n';
	}
	return 0;
}