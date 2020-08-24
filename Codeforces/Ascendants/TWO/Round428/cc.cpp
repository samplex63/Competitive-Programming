#include <bits/stdc++.h>
using namespace std;

#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second

using ll = long long;
using ld = long double;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<vector<int>> gr(n);
	for(int i = 0; i < n - 1; ++i) {
		int x, y;
		cin >> x >> y;
		x--; y--;
		gr[x].push_back(y);
		gr[y].push_back(x);
	}
	ld ans = 0;
	vector<int> dist(n), vector<ld> prob(n);
	dist[0] = 0;
	prob[0] = 1;
	function<void(int, int)> dfs = [&](int s, int p) {
		int cnt = 0;
		for(int i : gr[s]) {
			if(i != p) cnt++;
		}
		if(cnt == 0) ans += dist[p] * prob[p];
		for(int i : gr[s]) {
			dist[x] = dist[p] + 1;
			prob[x] = prob[x] / cnt;
			if(i != p) dfs(i, s);
		}
	};
	dfs(0, -1);
	cout << setprecision(12) << fixed << ans << '\n';
	return 0;
}