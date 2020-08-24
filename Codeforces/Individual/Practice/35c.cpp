#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())

typedef long long ll;
typedef long double ld;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n, m, kk;
	cin >> n >> m >> kk;
	vector<vector<int>> vec(n, vector<int>(m, INT_MAX));
	for(int i = 0; i < kk; ++i) {
		int x, y;
		cin >> x >> y;
		x--;
		y--;
		for(int j = 0; j < n; ++j) {
			for(int k = 0; k < m; ++k) {
				int manh = abs(j - x) + abs(k - y);
				vec[j][k] = min(vec[j][k], manh);
			}
		}
	}
	// for(int i = 0; i < n; ++i) {
	// 	for(int j = 0; j < m; ++j) {
	// 		cerr << vec[i][j] << ' ';
	// 	}
	// 	cerr << '\n';
	// }
	int ans = INT_MIN;
	int ans1 = 1, ans2 = 1;
	for(int i = 0; i < n; ++i) {
		auto it = max_element(vec[i].begin(), vec[i].end());
		if(ans < *it) {
			ans = *it;
			ans1 = i + 1;
			ans2 = (it - vec[i].begin()) + 1;
		}
	}
	cout << ans1 << ' ' << ans2 << '\n';
	return 0;
}