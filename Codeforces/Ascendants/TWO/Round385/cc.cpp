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
	int n, m, k;
	cin >> n >> m >> k;
	vector<int> vec(k);
	for(int i = 0; i < k; ++i) {
		cin >> vec[i];
		vec[i]--;
	}
	vector<vector<int>> gr(n);
	for(int i = 0; i < m; ++i) {
		int x, y;
		cin >> x >> y;
		x--;
		y--;
		gr[x].push_back(y);
		gr[y].push_back(x);
	}
	vector<pii> sto(k);
	vector<bool> vis(n);
	int ed = 0, cnt = 0;
	function<void(int)> dfs = [&](int s) {
		vis[s] = true;
		for(int x: gr[s]) {
			ed++;
			if(!vis[x]) {
				dfs(x);
			}
		}
		cnt++;
	};
	for(int i = 0; i < k; ++i) {
		ed = cnt = 0;
		dfs(vec[i]);
		sto[i] = {cnt, ed / 2};
	}
	// for(int i = 0; i < k; ++i) {
	// 	cerr << sto[i].fi << ' ' << sto[i].se << '\n';
	// }
	int tot_det = m;
	for(int i = 0; i < k; ++i) {
		tot_det -= sto[i].se;
	}
	ed = tot_det;
	int maxi = 0, ind = 0;
	for(int i = 0; i < k; ++i) {
		if(cmx(maxi, sto[i].fi)) {
			ind = i;
		}
	}
	ll ans = 0;
	for(int i = 0; i < k; ++i) {
		if(i == ind) {
			sto[i].fi += nv;
			sto[i].se += ed;
		}
		ans += ((sto[i].fi - 1) * ll(sto[i].fi)) / 2 - sto[i].se;
	}
	cout << ans << '\n';
	return 0;
}