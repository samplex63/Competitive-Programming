#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		vector<int> vec(n);
		for(auto &x: vec) {
			cin >> x;
		}
		sort(vec.rbegin(), vec.rend());
		long long int ans = 0;
		for(int i = 0; i < n; i += 2) {
			ans += vec[i];
		}
		cout << ans << '\n';
	}
	return 0;
}