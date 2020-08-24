#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

template<class T> bool cmn(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool cmx(T &a, T b) { return a < b ? (a = b, true) : false; }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, k;
	cin >> n >> m >> k;
	vector<string> vec(n);
	for(auto& x: vec) cin >> x;
	vector<set<int>> row(n);
	vector<set<int>> col(m);
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < m; ++j) {
			row[i].insert(j);
			col[j].insert(i);
		}
	}
	int x, y;
	cin >> x >> y;
	x--;
	y--;
	queue<pii> q;
	vector<vector<int>> dist(n, vector<int>(m, -1));
	row[x].erase(y);
	col[y].erase(x);
	dist[x][y] = 0;
	q.push({x, y});
	while(!q.empty()) {
		vector<pii> pass;
		int i = q.front().fi, j = q.front().se;
		q.pop();
		for(auto it = row[i].upper_bound(j); it != row[i].end() && vec[i][*it] != '#'; ++it) {
			if(*it - j > k) break;
			pass.push_back({i, *it});
		}
		for(auto it = col[j].upper_bound(i); it != col[j].end() && vec[*it][j] != '#'; ++it) {
			if(*it - i > k) break;
			pass.push_back({*it, j});
		}
		auto it = row[i].upper_bound(j);
		if(it != row[i].begin()) {
			it--;
			while(1) {
				if(vec[i][*it] == '#') break;
				if(j - *it > k) break;
				pass.push_back({i, *it});
				if(it == row[i].begin()) break;
				it--;
			}
		}
		it = col[j].upper_bound(i);
		if(it != col[j].begin()) {
			it--;
			while(1) {
				if(vec[*it][j] == '#') break;
				if(i - *it > k) break;
				pass.push_back({*it, j});
				if(it == col[j].begin()) break;
				it--;
			}
		}
		for(auto go : pass) {
			row[go.fi].erase(go.se);
			col[go.se].erase(go.fi);
			dist[go.fi][go.se] = dist[i][j] + 1;
			q.push({go.fi, go.se});
		}
	}
	cin >> x >> y;
	cout << dist[x - 1][y - 1] << '\n';
	return 0;
}