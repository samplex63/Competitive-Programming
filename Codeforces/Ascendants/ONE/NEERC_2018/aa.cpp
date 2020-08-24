#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int) (x).size()

typedef long long ll;
typedef long double ld;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k;
	cin >> n >> k;
	map<int, vector<int>> mp;
	vector<int> vec(n);
	for(int i = 0; i < n; ++i) {
		cin >> vec[i];
	}
	for(int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		mp[vec[i]].push_back(x);
	}
	int req = k - sz(mp);
	for(auto& x: mp) {
		sort(x.second.begin(), x.second.end());
	}
	vector<int> ans;
	for(auto x: mp) {
		for(int i = 0; i + 1 < sz(x.second); ++i) {
			ans.push_back(x.second[i]);
		}
	}
	sort(ans.begin(), ans.end());
	ll ansfinal = 0, cnt = 0;
	for(int i = 0; i < sz(ans) && cnt < req; ++i, ++cnt) {
		ansfinal += (ll) ans[i];
	}
	cout << ansfinal << '\n';
	return 0;
}