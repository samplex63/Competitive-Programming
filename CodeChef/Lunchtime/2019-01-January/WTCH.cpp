#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unsigned int t;
	cin >> t;
	while(t--) {
		string inp;
		int n;
		cin >> n;
		cin >> inp;
		int ans = 0;
		bool arr[n] = {};
		for(int i = 0; i < n; ++i) {
			if(inp[i] == '1') {
				for(int j = max(0, i - 1); j <= min(n - 1, i + 1); ++j) {
					arr[j] = true;
				}
			}
		}
		for(int i = 0; i < n; ++i) {
			if(!arr[i]) {
				for(int j = max(0, i - 1); j <= min(n - 1, i + 1); ++j) {
					arr[j] = true;
				}
				ans++;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}