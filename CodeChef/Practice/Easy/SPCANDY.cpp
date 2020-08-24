#include <bits/stdc++.h>
using namespace std;

typedef long long int LL;
typedef unsigned long long int ULL;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unsigned int t;

	cin >> t;
	while(t--) {
		LL n, m;
		cin >> n >> m;
		if(m == 0) {
			cout << "0 " << n << '\n';
		}
		else {
			auto ans = div(n, m);
			cout << ans.quot << ' ' << ans.rem << '\n';
		}
	}
	return 0;
}