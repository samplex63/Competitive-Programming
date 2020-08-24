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
	vector<int> vec(n);
	for(int i = 0; i < n; ++i) {
		cin >> vec[i];
	}
	int start = 1;
	vector<pii> ans;
	set<int> cur;
	for(int i = 0; i < n; ++i) {
		if(cur.find(vec[i]) != cur.end()) {
			ans.emplace_back(start, i + 1);
			start = i + 2;
			cur.clear();
		} else {
			cur.insert(vec[i]);
		}
	}
	if(sz(ans) == 0) {
		cout << -1 << '\n';
	} else {
		cout << sz(ans) << '\n';
		ans[sz(ans) - 1].second = n;
		for(int i = 0; i < sz(ans); ++i) {
			cout << ans[i].first << ' ' << ans[i].second << '\n';
		}
	}
	return 0;
}