#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		int d;
		cin >> d;
		int ans = d % 9;
		ans++;
		cout << ans << '\n';
	}
	return 0;
}