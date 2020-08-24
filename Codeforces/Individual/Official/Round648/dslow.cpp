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
bool vis[55][55];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--) {
		int n, m;
		cin >> n >> m;
		int dirx[] = {1, -1, 0, 0};
		int diry[] = {0, 0, -1, 1};
		auto isIn = [&](int x, int y) {
			return x >= 0 && y >= 0 && x < n && y < m;
		};
		vector<string> vec(n);
		vector<string> cpy(vec);
		for(auto& x : vec) cin >> x;
		int gc = 0;
		for(int i = 0; i < n; ++i) {
			gc += count(all(vec[i]), 'G');
		}
		if(gc == 0) {
			cout << "yes\n";
			continue;
		}
		bool ans = true;
		for(int i = 0; i < n; ++i) {
			for(int j = 0; j < m; ++j) {
				if(vec[i][j] == 'B') {
					for(int dir = 0; dir < 4; ++dir) {
						int goj = j + dirx[dir], goi = i + diry[dir];
						if(goi == m - 1 && goj == n - 1) {
							ans = false;
							break;
						}
						if(isIn(goi, goj) && vec[goi][goj] == '.') {
							vec[goi][goj] = '#';
						}
					}
				}
			}
			if(!ans) break;
		}
		if(!ans) {
			cout << "no\n";
			continue;
		}
		bool flag = false;
		function<void(int, int)> dfs = [&](int i, int j) {
			if(flag) return;
			vis[i][j] = true;
			for(int dir = 0; dir < 4; ++dir) {
				int goi = i + diry[dir], goj = j + dirx[dir];
				if(isIn(goi, goj) && !vis[goi][goj] && vec[goi][goj] != '#') {
					if(goi == n - 1 && goj == m - 1) {
						flag = true;
						return;
					}
					dfs(goi, goj);
				}
			}
		};
		function<void(int, int)> dfs2 = [&](int i, int j) {
			if(flag) return;
			vis[i][j] = true;
			for(int dir = 0; dir < 4; ++dir) {
				int goi = i + diry[dir], goj = j + dirx[dir];
				if(isIn(goi, goj) && !vis[goi][goj] && vec[goi][goj] != '#') {
					if((goi == n - 1 && goj == m - 1) || vec[goi][goj] == 'G') {
						flag = true;
						return;
					}
					dfs2(goi, goj);
				}
			}
		};
		for(int i = 0; i < n; ++i) {
			for(int j = 0; j < m; ++j) {
				if(vec[i][j] == 'G') {
					// for(int k = 0; k < n; ++k) fill(all(vis[k]), false);
					memset(vis, false, sizeof(vis));
					flag = false;
					dfs(i, j);
					if(!flag) {
						ans = false;
						break;
					}
				}
			}
			if(!ans) break;
		}
		if(ans) {
			for(int i = 0; i < n; ++i) {
				for(int j = 0; j < m; ++j) {
					if(vec[i][j] == 'B') {
						// for(int k = 0; k < n; ++k) fill(all(vis[k]), false);
						memset(vis, false, sizeof(vis));
						flag = false;
						dfs2(i, j);
						if(flag) {
							ans = false;
							break;
						}
					}
				}
				if(!ans) break;
			}
		}
		cout << (ans ? "yes" : "no") << '\n';
	}
	return 0;
}