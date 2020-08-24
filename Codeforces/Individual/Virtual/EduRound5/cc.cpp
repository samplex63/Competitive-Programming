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
	vector<string> vec(n + 2);
	vec[0] = string(m + 2, ' ');
	vec[n + 1] = string(m + 2, ' ');
	for(int i = 1; i <= n; ++i) {
		cin >> vec[i];
		vec[i] = " " + vec[i];
		vec[i] += " ";
	}
	vector<vector<pair<int, int>>> comp(n + 2, vector<pair<int, int>>(m + 2, {0, -1}));
	vector<pair<int, int>> val;
	function<void(int, int)> calc = [&](int i, int j) {
		// debug(i, j);
		if(vec[i][j] == '.') {
			if(comp[i][j].second == -1) {
				val.emplace_back(i, j);
				comp[i][j].second = INT_MAX;
				calc(i - 1, j);
				calc(i + 1, j);
				calc(i, j - 1);
				calc(i, j + 1);
			}
		}
	};
	int cnt = 0;
	for(int i = 1; i <= n; ++i) {
		for(int j = 1; j <= m; ++j) {
			if(vec[i][j] == '.') {
				if(comp[i][j].second != -1) continue;
				val.clear();
				calc(i, j);
				for(auto x: val) {
					comp[x.first][x.second].first = sz(val);
					comp[x.first][x.second].second = cnt;
				}
				cnt++;
			}
		}
	}
	for(int i = 1; i <= n; ++i) {
		for(int j = 1; j <= m; ++j) {
			if(vec[i][j] == '*') {
				int tot = 1;
				set<pair<int, int>> ok{comp[i - 1][j], comp[i + 1][j], comp[i][j + 1], comp[i][j - 1]};
				for(auto x: ok) {
					tot = (tot + x.first) % 10;
				}
				vec[i][j] = tot + '0';
			}
		}
	}
	for(int i = 1; i <= n; ++i) {
		for(int j = 1; j <= m; ++j) {
			cout << vec[i][j];
		}
		cout << '\n';
	}
	return 0;
}