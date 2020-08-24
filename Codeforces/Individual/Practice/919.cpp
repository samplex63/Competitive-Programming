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
	string inp;
	cin >> n >> m >> inp;
	vector<vector<int>> gr(n);
	vector<int> inc(n);
	for(int i = 0; i < m; ++i) {
		int a, b;
		cin >> a >> b;
		a--; b--;
		gr[a].push_back(b);
		inc[b]++;
	}
	vector<vector<int>> ha(n);
	vector<bool> safe(n, true), vis(n);
	set<int> st;
	bool ok = true;
	function<vector<int>(int)> dfs = [&](int s) {
		st.insert(s);
		vis[s] = true;
		safe[s] = false;
		vector<int> ret(26);
		ret[inp[s] - 'a']++;
		for(int x : gr[s]) {
			if(!safe[x]) {
				ok = false;
				return ret;
			}
			vector<int> go = !vis[x] ? dfs(x) : ha[x];
			go[inp[s] - 'a']++;
			for(int i = 0; i < 26; ++i) {
				cmx(ret[i], go[i]);
			}
		}
		safe[s] = true;
		ha[s] = ret;
		return ret;
	};
	int ans = 0;
	for(int i = 0; i < n; ++i) {
		if(inc[i] == 0) {
			vector<int> go = dfs(i);
			cmx(ans, *max_element(all(go)));
		}
	}
	ok &= sz(st) == n;
	cout << (ok ? ans : -1) << '\n';
	return 0;
}