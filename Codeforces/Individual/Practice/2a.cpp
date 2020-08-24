#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())

typedef long long ll;
typedef long double ld;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<pair<string, int>> vec(n);
	map<string, int> m;
	for(int i = 0; i < n; ++i) {
		cin >> vec[i].fi >> vec[i].se;
		m[vec[i].fi] += vec[i].se;
	}
	int ans = 0;
	for(auto x: m) {
		ans = max(ans, x.se);
	}
	vector<string> strs;
	for(auto x: m) {
		if(x.se == ans) strs.push_back(x.fi);
	}
	sort(strs.begin(), strs.end());
	map<string, int> reach;
	string fans;

	for(int i = 0; i < n; ++i) {
		if(binary_search(strs.begin(), strs.end(), vec[i].fi)) {
			reach[vec[i].fi] += vec[i].se;
			if(reach[vec[i].fi] >= ans) {
				fans = vec[i].fi;
				break;
			}
		}
	}
	cout << fans << '\n';
	return 0;
}