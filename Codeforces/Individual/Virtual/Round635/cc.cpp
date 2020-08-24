#include <bits/stdc++.h>
using namespace std;

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
	int n, k;
	cin >> n >> k;
	vector<vector<int>> gr(n);
	for(int i = 0; i + 1 < n; i++) {
		int x, y;
		cin >> x >> y;
		x--; y--;
		gr[x].push_back(y);
		gr[y].push_back(x);
	}
	vector<int> hgt(n, 0), chld(n, 0);
	function<void(int, int)> dfs = [&] (int c, int p) {
		chld[c] = 1;
		for(int i = 0; i < sz(gr[c]); i++) {
			int& cur = gr[c][i];
			if(cur == p) continue;
			hgt[cur] = hgt[c] + 1;
			dfs(cur, c);
			chld[c] += chld[cur];
		}
	};
	hgt[0] = 1;
	dfs(0, -1);
	vector<int> diff(n);
	for(int i = 0; i < n; i++) {
		diff[i] = chld[i] - hgt[i];
	}
	sort(all(diff));
	ll ans = 0;
	for(int i = n - 1; i >= k; i--) ans += diff[i];
	cout << ans << '\n';
	return 0;
}