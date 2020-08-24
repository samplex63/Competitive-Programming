#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int) (x).size()

typedef long long ll;
typedef long double ld;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	cin >> n >> m;
	vector<vector<bool>> vec(n, vector<bool>(n, false));
	for(int i = 0; i < m; ++i) {
		int x, y;
		cin >> x >> y;
		x--;
		y--;
		vec[x][y] = true;
		vec[y][x] = true;
	}
	if(n != 7) {
		cout << m;
		return 0;
	}
	int ans = 0, mind, minv = INT_MAX;

	for(int i = 0; i < n; ++i) {
		int num = count(vec[i].begin(), vec[i].end(), true);
		if(num < minv) {
			minv = num;
			mind = i;
		}
	}
	for(int i = 0; i < 7; ++i) {
		if(i == mind) continue;
		for(int j = i + 1; j < 7; ++j) {
			if(j == mind) continue;
			if(vec[i][j]) ans++;
		}
	}
	if(minv > 0) ans++;
	cout << ans << '\n'; 
	return 0;
}