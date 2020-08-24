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
	int n, m, k;
	cin >> n >> m >> k;
	
	vector<vector<int>> answer(n, vector<int>(m, -1)), vec(n, vector<int>(m));
	vector<pair<int, int>> val;
	int dist;

	for(int i = 0; i < n; ++i) {
		string foo;
		cin >> foo;
		for(int j = 0; j < m; ++j) {
			vec[i][j] = (foo[j] == '.' ? true : false);
		}
	}

	function<void(int, int)> sol = [&] (int i, int j) {
		if(vec[i][j]) {
			if(answer[i][j] == -1) {
				val.emplace_back(i, j);
				answer[i][j] = 0;
				sol(i - 1, j);
				sol(i + 1, j);
				sol(i, j - 1);
				sol(i, j + 1);
			}
		} else {
			dist++;
		}
	};
	
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < m; ++j) {
			if(vec[i][j]) {
				if(answer[i][j] != -1) continue;
				val.clear();
				dist = 0;
				sol(i, j);
				for(int l = 0; l < sz(val); ++l) {
					answer[val[l].fi][val[l].se] = dist;
				}
			}
		}
	}
	for(int kk = 0; kk < k; ++kk) {
		int x, y;
		cin >> x >> y;
		x--;
		y--;
		cout << answer[x][y] << '\n';
	}
	return 0;
}