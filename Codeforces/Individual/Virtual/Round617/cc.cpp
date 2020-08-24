#include <bits/stdc++.h>
using namespace std;

#define sz(x) static_cast<int>((x).size())

using ll = long long;
using ld = long double;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		map<pair<int, int>, vector<int>> m;
		m[{0, 0}].push_back(0);
		int xc = 0, yc = 0;
		for(int i = 0; i < n; ++i) {
			if(s[i] == 'L') {
				xc--;
			} else if(s[i] == 'R') {
				xc++;
			} else if(s[i] == 'D') {
				yc--;
			} else {
				yc++;
			}
			m[{xc, yc}].push_back(i + 1);
		}
		int ans = INT_MAX, ansp1, ansp2;
		for(auto x: m) {
			auto vec = x.second;
			for(int i = 1; i < sz(vec); ++i) {
				if(ans > vec[i] - vec[i - 1]) {
					ans = vec[i] - vec[i - 1];
					ansp1 = vec[i];
					ansp2 = vec[i - 1] + 1;
				}
			}
		}
		if(ans == INT_MAX) cout << -1 << '\n';
		else cout << ansp2 << ' ' << ansp1 << '\n';
	}
	return 0;
}