#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ULL;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unsigned int t;

	cin >> t;
	while(t--) {
		int n, p;
		cin >> n >> p;
		int m = 0, value;

		for(int i = 1; i <= n; ++i) {
			value = n % i;
			if(value > m) {
				m = value;
			}
		}

		ULL ans = 0;
		int diff = p - m;
		ans += (diff * diff);
		int diff2 = p - n;
		ans += (diff2 * diff);
		ans += (diff2 * diff2);
		cout << ans << '\n';
	}
	return 0;
}