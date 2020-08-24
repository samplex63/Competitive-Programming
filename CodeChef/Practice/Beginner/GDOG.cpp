#include<bits/stdc++.h>
using namespace std;

int main() {
	int t, n, k, ans;

	cin >> t;
	while(t--) {
		ans = 0;
		cin >> n >> k;
		for(int i = 1; i <= k; i++) {
			ans = max(ans, n % i);
		}
		cout << ans << endl;
	}
	return 0;
}