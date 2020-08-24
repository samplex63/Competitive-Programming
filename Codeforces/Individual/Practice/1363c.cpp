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
	int tt;
	cin >> tt;
	while(tt--) {
		int n, s;
		cin >> n >> s;
		s--;
		vector<vector<int>> gr(n);
		for(int i = 1; i < n; ++i) {
			int k, q;
			cin >> k >> q;
			k--;
			q--;
			gr[k].push_back(q);
			gr[q].push_back(k);
		}
		if(sz(gr[s]) <= 1) {
			cout << "Ayush\n";
			continue;
		}
		int turn = 0;
		int cnt = 0;
		function<void(int, int)> dfs = [&](int go, int p) {
			cnt++;
			for(int x : gr[go]) {
				if(x != p) dfs(x, go);
			}
		};
		for(int x : gr[s]) {
			cnt = 0;
			dfs(x, s);
			turn ^= cnt % 2 == 0;
		}
		turn ^= sz(gr[s]) % 2 == 0;
		cout << (turn ? "Ashish" : "Ayush") << '\n';
	}
	return 0;
}