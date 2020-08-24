#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unsigned int t;
	cin >> t;
	while(t--) {
		long long int n;
		cin >> n;
		long long int ans = (n * (n + 1)) / 2 + n;
		cout << ans << '\n';
	}
	return 0;
}