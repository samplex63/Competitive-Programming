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

	#ifdef LOCAL
	freopen("in", "r", stdin);
	#endif
	int n;
	cin >> n;
	vector<vector<int>> vec(n, vector<int>(n)), dp2(n, vector<int>(n, 0)), dp5(n, vector<int>(n, 0));
	bool has_zero = false;
	int zx;
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < n; ++j) {
			cin >> vec[i][j];
			if(vec[i][j] == 0) {
				has_zero = true;
				zx = j;
			}
		}
	}
	auto facts = [&] (int i, int j) {
		if(i == 0) return 0;
		int ret = 0;
		while(i % j == 0) {
			i /= j;
			ret++;
		}
		return ret;
	};
	dp2[0][0] = facts(vec[0][0], 2);
	dp5[0][0] = facts(vec[0][0], 5);
	for(int i = 1; i < n; ++i) {
		dp2[0][i] = dp2[0][i - 1] + facts(vec[0][i], 2);
		dp5[0][i] = dp5[0][i - 1] + facts(vec[0][i], 5);
	}
	for(int i = 1; i < n; ++i) {
		dp2[i][0] = dp2[i - 1][0] + facts(vec[i][0], 2);
		dp5[i][0] = dp5[i - 1][0] + facts(vec[i][0], 5);
	}
	for(int i = 1; i < n; ++i) {
		for(int j = 1; j < n; ++j) {
			dp2[i][j] = min(dp2[i - 1][j], dp2[i][j - 1]) + facts(vec[i][j], 2);
			dp5[i][j] = min(dp5[i - 1][j], dp5[i][j - 1]) + facts(vec[i][j], 5);
		}
	}
	int num_ans = min(dp2[n - 1][n - 1], dp5[n - 1][n - 1]);
	if(num_ans > 1 && has_zero) {
		cout << 1 << '\n';
		cout << string(zx, 'R') << string(n - 1, 'D') << string(n - zx - 1, 'R') << '\n';
		return 0;
	}
	cout << num_ans << '\n';
	string path = "";
	if(dp2[n - 1][n - 1] > dp5[n - 1][n - 1]) {
		int i = n - 1, j = n - 1;
		while(i > 0 && j > 0) {
			if(dp5[i - 1][j] > dp5[i][j - 1]) {
				path = "R" + path;
				j--;
			} else {
				path = "D" + path;
				i--;
			}
		}
		if(i == 0)  path = string(j, 'R') + path;
		else path = string(i, 'D') + path;
	} else {
		int i = n - 1, j = n - 1;
		while(i > 0 && j > 0) {
			if(dp2[i - 1][j] > dp2[i][j - 1]) {
				path = "R" + path;
				j--;
			} else {
				path = "D" + path;
				i--;
			}
		}
		if(i == 0)  path = string(j, 'R') + path;
		else path = string(i, 'D') + path;
	}
	cout << path << '\n';
	return 0;
}