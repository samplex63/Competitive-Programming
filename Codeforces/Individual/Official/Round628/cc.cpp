#include <bits/stdc++.h>
using namespace std;

#define sz(x) static_cast<int>((x).size())

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

template<class T> bool cmn(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool cmx(T &a, T b) { return a < b ? (a = b, true) : false; }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<vector<pii>> vec(n);
	vector<pii> output_order;
	map<pii, int> m;
	for(int i = 0; i < n - 1; ++i) {
		int x, y;
		cin >> x >> y;
		x--, y--;
		output_order.emplace_back(x, y);
		vec[x].emplace_back(y, -1);
		vec[y].emplace_back(x, -1);
	}
	int max_con = 0, max_val = 0;
	for(int i = 0; i < n; ++i) {
		if(cmx(max_val, sz(vec[i]))) {
			max_con = i;
		}
	}
	vector<bool> visited(n, false);
	visited[max_con] = true;
	queue<int> q;
	q.push(max_con);
	int cnt = 0;
	while(!q.empty()) {
		int cur = q.front();
		q.pop();
		for(int i = 0; i < sz(vec[cur]); ++i) {
			auto& rep = vec[cur][i];
			if(!visited[rep.first]) {
				visited[rep.first] = true;
				rep.second = cnt++;
				q.push(rep.first);
			}
		}
	}
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < sz(vec[i]); ++j) {
			if(vec[i][j].second == -1) continue;
			m[{i, vec[i][j].first}] = vec[i][j].second;
			// cout << '(' << vec[i][j].first << ' ' << vec[i][j].second << ") ";
		}
		// cout << '\n';
	}
	for(auto x: output_order) {
		if(!m.count(x)) {
			swap(x.first, x.second);
		}
		cout << m[x] << '\n';
	}
	return 0;
}