#include <bits/stdc++.h>
using namespace std;

typedef long long int LL;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, m;
	cin >> n >> m;

	std::vector<LL> vec_first(n);
	std::vector<LL> vec_second(m);
	for(auto &x: vec_first) {
		cin >> x;
	}
	for(auto &x: vec_second) {
		cin >> x;
	}
	unordered_map<LL, pair<int, int>> main_map;

	int limit = n + m - 1;
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < m; ++j) {
			main_map[vec_first[i] + vec_second[j]] = make_pair(i, j);
			if(main_map.size() == limit) {
				goto label;
			}
		}
	}
	label:
	for(auto x: main_map) {
   		cout << x.second.first << ' ' << x.second.second << '\n';
	}
	return 0;
}