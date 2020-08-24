#include <bits/stdc++.h>

#define sz(x) (int) (x).size()

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	string l, r;
	cin >> l >> r;

	vector< vector<int> > larr(27), rarr(27);
	for(int i = 0; i < n; ++i) {
		if(islower(l[i])) {
			larr[l[i] - 'a'].push_back(i + 1);
		} else {
			larr[26].push_back(i + 1);
		}
	}
	for(int i = 0; i < n; ++i) {
		if(islower(r[i])) {
			rarr[r[i] - 'a'].push_back(i + 1);
		} else {
			rarr[26].push_back(i + 1);
		}
	}

	vector<pair<int, int>> ans;
	for(int i = 0; i < 26; ++i) {
		int subb = min(sz(larr[i]), sz(rarr[i]));
		for(int j = 0; j < subb; ++j) {
			ans.emplace_back(larr[i][j], rarr[i][j]);
		}
	}

	int left = 0, right = 0;
	for(int i = 0; i < 26; ++i) {
		int diff = abs(sz(larr[i]) - sz(rarr[i]));
		if(diff > 0) {
			if(sz(larr[i]) > sz(rarr[i])) {
				for(int j = sz(rarr[i]); j < sz(larr[i]) && left < sz(rarr[26]); ++j) {
					ans.emplace_back(larr[i][j], rarr[26][left++]);
				}
			}
			else {
				for(int j = sz(larr[i]); j < sz(rarr[i]) && right < sz(larr[26]); ++j) {
					ans.emplace_back(larr[26][right++], rarr[i][j]);
				}
			}
		}
	}

	while(left < sz(larr[26]) && right < sz(rarr[26])) {
		ans.emplace_back(larr[26][left++], rarr[26][right++]);
	}

	cout << sz(ans) << '\n';
	for(int i = 0; i < sz(ans); ++i) {
		cout << ans[i].first << ' ' << ans[i].second << '\n';
	}
	return 0;
}