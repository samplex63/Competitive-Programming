#include <bits/stdc++.h>
using namespace std;

#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()

using ll = long long;
using ld = long double;

template<class T> bool cmn(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool cmx(T &a, T b) { return a < b ? (a = b, true) : false; }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<vector<int>> gr(n);
	for(int i = 1; i < n; ++i) {
		int x, y;
		cin >> x >> y;
		x--; y--;
		gr[x].push_back(y);
		gr[y].push_back(x);
	}
	int one = 0, two = 0;
	ll ans = 0;
	function<void(int, int, bool)> dfs = [&](int s, int p, bool flag) {
		if(flag) {
			ans += max(0, one - 1);
			two++;
		} else {
			ans += max(0, two - 1);
			one++;
		}
		for(int go : gr[s]) {
			if(go != p) dfs(go, s, !flag);
		}
	};
	dfs(0, -1, 1);
	cout << ans << '\n';
	return 0;
}
