#include <bits/stdc++.h>
using namespace std;

#define sz(x) static_cast<int>((x).size())

using ll = long long;
using ld = long double;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	cin >> n >> m;
	vector<vector<int>> vec(n, vector<int>(m));
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < m; ++j) {
			cin >> vec[i][j];
		}
	}
	int ans_a = INT_MIN;
	for(int i = 0; i < n; ++i) {
		int ans = INT_MAX;
		for(int j = 0; j < m; ++j) {
			ans = min(ans, vec[i][j]);
		}
		ans_a = max(ans_a, ans);
	}
	cout << ans_a << '\n';
	return 0;
}