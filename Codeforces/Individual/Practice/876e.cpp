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
	int n, m;
	cin >> n >> m;
	vector<vector<int>> gr(m + 1);
	set<int> caps;
	vector<vector<int>> vec(n);
	for(int i = 0; i < n; ++i) {
		int val;
		cin >> val;
		vec[i].resize(val);
		for(int j = 0; j < val; ++j) {
			cin >> vec[i][j];
		}
	}
	for(int i = 1; i < n; ++i) {
		int si = min(sz(vec[i - 1]), sz(vec[i]));
		for(int j = 0; j < si; ++j) {
			if(vec[i - 1][j] > vec[i][j]) {
				caps.insert(vec[i - 1][j]);
				break;
			} else if(vec[i - 1][j] < vec[i][j]) {
				gr[vec[i][j]].push_back(vec[i - 1][j]);
				break;
			}
		}
	}
	set<int> act_caps;
	function<void(int)> dfs = [&](int s) {
		act_caps.insert(s);
		for(auto x: gr[s]) {
			if(!act_caps.count(x)) dfs(x);
		}
	};
	for(int i = 1; i <= m; ++i) {
		if(caps.count(i)) {
			dfs(i);
		}
	}
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < sz(vec[i]); ++j) {
			if(!act_caps.count(vec[i][j])) {
				vec[i][j] += m;
			}
		}
	}
	for(int i = 1; i < n; ++i) {
		int si = min(sz(vec[i - 1]), sz(vec[i]));
		bool flag = false;
		for(int j = 0; j < si; ++j) {
			if(vec[i - 1][j] < vec[i][j]) {
				flag = true;
				break;
			} else if(vec[i - 1][j] > vec[i][j]) {
				cout << "No\n";
				return 0;
			}
		}
		if(!flag && sz(vec[i - 1]) > sz(vec[i])) {
			cout << "No\n";
			return 0;
		}
	}
	cout << "Yes\n" << sz(act_caps) << '\n';
	for(int x: act_caps) cout << x << ' ';
	return 0;
}