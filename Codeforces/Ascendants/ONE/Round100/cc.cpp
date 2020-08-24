#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())

typedef long long ll;
typedef long double ld;

struct comp {
	bool operator() (pair<int, int> a, pair<int, int> b) {
		if(a.fi == b.fi) return a.se > b.se;
		return a.fi > b.fi;
	}
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	map<int, int> m;
	for(int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		m[x]++;
	}
	set<pair<int, int>, comp> s;
	for(auto x: m) {
		s.emplace(x.se, x.fi);
	}
	vector<set<int, greater<int>>> ans;
	while(sz(s) > 2) {
		auto it1 = s.begin();
		auto it2 = next(it1);
		auto it3 = next(it2);
		ans.push_back({it1->second, it2->second, it3->second});

		if(it1->first > 1) s.emplace(it1->first - 1, it1->second);
		if(it2->first > 1) s.emplace(it2->first - 1, it2->second);
		if(it3->first > 1) s.emplace(it3->first - 1, it3->second);
		s.erase(it1);
		s.erase(it2);
		s.erase(it3);
	}
	cout << sz(ans) << '\n';
	for(int i = 0; i < sz(ans); ++i) {
		for(auto x: ans[i]) {
			cout << x << ' ';
		}
		cout << '\n';
	}
	return 0;
}