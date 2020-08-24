#include <bits/stdc++.h>
using namespace std;

#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second

using ll = long long;
using ld = long double;

template<class T> bool cmn(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool cmx(T &a, T b) { return a < b ? (a = b, true) : false; }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--) {
		int n, m;
		cin >> n >> m;
		map<int, int> mp;
		for(int i = 0; i < n; ++i) {
			for(int j = 0; j < m; ++j) {
				int x;
				cin >> x;
				mp[x]++;
			}
		}
		vector<vector<int>> ans(n, vector<int>(m));
		vector<int> remain;
		bool flag = true;
		auto it = mp.begin();
		for(int i = 0; i < n; ++i) {
			for(int j = 0; j < m / 2; ++j) {
				if(it->se == 1) {
					remain.push_back(it->fi);
					mp.erase(it);
					it = mp.begin();
					j--;
					continue;
				}
				if(mp.empty()) {
					flag = false;
					break;
				}
				ans[i][j] = ans[i][m - j - 1] = it->fi;
				it->se -= 2;
				if(it->se < 2) {
					if(it->se == 1) {
						remain.push_back(it->fi);
					}
					mp.erase(it);
					it = mp.begin();
				}
			}
			if(!flag) break;
		}
		if(!flag) {
			cout << -1 << '\n';
			continue;
		}
		for(auto x: mp) {
			for(int i = 0; i < x.se; ++i) {
				remain.push_back(x.fi);
			}
		}
		if(m & 1) {
			// cerr << sz(remain) << '\n';
			// assert(sz(remain) == n);
			for(int i = 0; i < n; ++i) {
				ans[i][m / 2] = remain[i];
			}
		}
		for(int i = 0; i < n; ++i) {
			for(int j = 0; j < m; ++j) {
				cout << ans[i][j] << ' ';
			}
			cout << '\n';
		}
	}
	return 0;
}