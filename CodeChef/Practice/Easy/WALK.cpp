#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unsigned int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<int> vec(n);
		for(auto &x: vec) {
			cin >> x;
		}
		int ans = n;
		for(int i = 0; i < n; ++i) {
			if(vec[i] + i > ans) {
				ans = vec[i] + i;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}