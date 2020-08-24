#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		int n, k;
		cin >> n >> k;
		int ans = 0;
		for(int i = 0; i < n; ++i) {
			int x;
			cin >> x;
			if(x % 2 == 0) {
				ans++;
			}
		}
		if(ans == n && k == 0) {
			cout << "NO\n";
		}
		else if (ans >= k) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
	return 0;
}