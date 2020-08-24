#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unsigned int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> vec(n + 1);
		for (int i = 1; i <= n; ++i) {
			cin >> vec[i];
		}
		long long int ans = 0;
		sort(vec.begin(), vec.end());
		for (int i = 1; i < n; ++i) {
			for (int j = i + 1; j <= n; ++j) {
				if (vec[i] != vec[j]) {
					ans += (n - j + 1);
					break;
				}
			}
		}
		cout << ans << '\n';
	}
	return 0;
}