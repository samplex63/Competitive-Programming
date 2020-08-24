#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		int x, y, k;
		cin >> x >> y >> k;
		int tot = x + y;
		int div = tot / k;
		cout << ((div % 2 == 0)? "Chef": "Paja") << '\n';
	}
	return 0;
}