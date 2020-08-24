#include <bits/stdc++.h>
using namespace std;

#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()

using ll = long long;
using ld = long double;

template<class T> bool cmn(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool cmx(T &a, T b) { return a < b ? (a = b, true) : false; }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, t;
	cin >> n >> m >> t;
	vector<string> vec(n);
	const ll inf = ll(2e18);
	for(int i = 0; i < n; ++i) cin >> vec[i];
	const int dx[] = {0, 0, 1, -1};
	const int dy[] = {1, -1, 0, 0};
	vector<vector<ll>> dist(n, vector<ll>(m, inf));
	auto isIn = [&](int i, int j) {
		return i >= 0 && i < n && j >= 0 && j < m;
	};
	queue<pair<int, int>> q;
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < m; ++j) {
			for(int dir = 0; dir < 4; ++dir) {
				int xv = i + dy[dir];
				int yv = j + dx[dir];
				if(isIn(xv, yv) && vec[i][j] == vec[xv][yv]) {
					q.push({i, j});
					dist[i][j] = true;
					break;
				}
			}
		}
	}
	while(!q.empty()) {
		auto s = q.front();
		q.pop();
		for(int dir = 0; dir < 4; ++dir) {
			int xv = s.first + dy[dir];
			int yv = s.second + dx[dir];
			if(!isIn(xv, yv) || dist[xv][yv] != inf) continue;
			dist[xv][yv] = dist[s.first][s.second] + 1;
			q.push({xv, yv});
		}
	}
	// for(int i = 0; i < n; ++i) {
	// 	for(int j = 0; j < m; ++j) cerr << dist[i][j] << ' ';
	// 	cerr << '\n';
	// }
	for(int tt = 0; tt < t; ++tt) {
		int r, c;
		ll p;
		cin >> r >> c >> p;
		r--;
		c--;
		ll diff = p - dist[r][c];
		int pr = vec[r][c] - '0';
		if(diff >= 0 && diff % 2 == 0) pr ^= 1;
		cout << pr << '\n'; 
	}
	return 0;
}