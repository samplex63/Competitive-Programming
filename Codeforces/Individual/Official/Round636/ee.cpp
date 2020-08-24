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
	int tt;
	cin >> tt;
	while(tt--) {
		int n, m, a, b, c;
		cin >> n >> m >> a >> b >> c;
		vector<int> prices(m);
		for(int i = 0; i < m; ++i) cin >> prices[i];
		sort(all(prices));

		vector<vector<int>> gr(n);
		for(int i = 0; i < m; ++i) {
			int x, y;
			cin >> x >> y;
			x--;
			y--;
			gr[x].push_back(y);
			gr[y].push_back(x);
		}
		a--;
		b--;
		c--;
		vector<bool> vis(n);
		vector<int> dist(n);
		auto Bfs = [&](int st) {
			fill(all(vis), false);
			fill(all(dist), 0);
			queue<int> q;
			vis[st] = true;
			q.push(st);
			while(!q.empty()) {
				int go = q.front();
				q.pop();
				for(auto x: gr[go]) {
					if(vis[x]) continue;
					dist[x] = dist[go] + 1;
					q.push(x);
					vis[x] = true;
				}
			}
		};
		Bfs(a);
		int store = dist[b], store_2 = dist[c];
		ll a_to_b = accumulate(prices.begin(), prices.begin() + dist[b], 0ll);
		Bfs(b);
		ll b_to_c = accumulate(prices.begin(), prices.begin() + dist[c], 0ll);
		ll b_to_c_not = accumulate(prices.begin() + store, prices.begin() + store + dist[c], 0ll);
		ll a_to_c = accumulate(prices.begin() + dist[c], prices.begin() + dist[c] + store_2, 0ll);
		ll c_to_b = accumulate(prices.begin(), prices.begin() + dist[c], 0ll);
		// Bfs(c);
		cout << min(a_to_b + b_to_c_not, a_to_c + c_to_b + b_to_c) << '\n';
	}
	return 0;
}