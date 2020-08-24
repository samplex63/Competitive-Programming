#include <bits/stdc++.h>
using namespace std;

typedef long long int LL;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	LL n, m;
	cin >> n >> m;
	for(LL i = 0; i < m; ++i) {
		LL num;
		cin >> num;

		LL start = n + 2;
		LL end = 3 * n;

		if(num < start || num > end) {
			cout << "0\n";
		}
		else {
			LL diff1 = (num - start) + 1;
			LL diff2 = (end - num) + 1;

			cout << min(diff1, diff2) << '\n';
		}
	}
	return 0;
}