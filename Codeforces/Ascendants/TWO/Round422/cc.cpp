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

struct str {
	int l, r, c, pre;
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	cin >> n >> m;
	map<int, vector<str>> mp;
	for(int i = 0; i < n; ++i) {
		int x, y, c;
		cin >> x >> y >> c;
		mp[y - x + 1].push_back({x, y, c, c});
	}
	for(auto &x : mp) {
		sort(all(x.se), [](str a, str b) {
			return a.l < b.l;
		});
	}
	for(auto& x: mp) {
		vector<str>& go = x.se;
		for(int i = sz(go) - 2; i >= 0; --i) {
			cmn(go[i].pre, go[i + 1].pre);
		}
	}
	int ans = INT_MAX;
	for(auto x: mp) {
		auto& v1 = x.se;
		auto& v2 = mp[m - x.fi];
		for(int i = 0; i < sz(v1); ++i) {
			str temp = v1[i];
			temp.l = temp.r;
			temp.r = -1;
			auto it = upper_bound(all(v2), temp, [](str a, str b) {
				return a.l < b.l;
			});
			if(it == v2.end()) break;
			cmn(ans, it->pre + v1[i].c);
		}
	}
	cout << (ans == INT_MAX ? -1 : ans) << '\n';
	return 0;
}