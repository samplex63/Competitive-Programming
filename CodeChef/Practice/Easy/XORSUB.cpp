#include <bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "The value of \"" << #x << "\" is " << x << '\n'
typedef long long int LLI;

const int max_bits = 1024;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		int n, k;
		cin >> n >> k;
		vector<int> vec(n + 1);

		bool dp[n + 1][max_bits] = {};

		for(int i = 1; i <= n; ++i) {
			cin >> vec[i];
		}

		dp[0][0] = true;

		for(int i = 1; i <= n; ++i) {
			for(int j = 0; j < max_bits; ++j) {
				dp[i][j] = dp[i - 1][j] | dp[i - 1][vec[i] ^ j];
			}
		}

		int ans = k;
		for(int i = 0; i < max_bits; ++i) {
			if(dp[n][i]) {
				ans = max(ans, (i ^ k));
			}
		}

		cout << ans << '\n';
	}
	return 0;
}