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
		vector<int> vec;
		vec.push_back(0);
		for(int i = 1; i <= n; ++i) {
			int x;
			cin >> x;
			vec.push_back(x);
		}
		int ans = 0;
		for(int i = 0; i < n; ++i) {
			if(vec[i + 1] - vec[i] > k) {
				int d = ceil((((double) (vec[i + 1] - vec[i])) / k) - 1);
				ans += d;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}