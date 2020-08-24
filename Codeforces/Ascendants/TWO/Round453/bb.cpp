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
	int n;
	cin >> n;
	vector<vector<int>> gr(n);
	for(int i = 1; i < n; ++i) {
		int x;
		cin >> x;
		gr[i].push_back(x - 1);
		gr[x - 1].push_back(i);
	}
	vector<int> des(n);
	for(int i = 0; i < n; ++i) cin >> des[i];
	int cnt = 0;
	function<void(int, int)> dfs = [&](int s, int p) {
		if(p == -1) {
			cnt++;
		} else if(des[p] != des[s]) {
			cnt++;
		}
		for(int x : gr[s]) {
			if(x != p) dfs(x, s);
		}
	};
	dfs(0, -1);
	cout << cnt << '\n';
	return 0;
}