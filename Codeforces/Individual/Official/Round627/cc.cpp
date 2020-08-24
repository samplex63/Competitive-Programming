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
		string s;
		cin >> s;
		s = "R" + s;
		int n = sz(s);
		int ans = 0, curr = 0;
		for(int i = 0; i < n; ++i) {
			if(s[i] == 'L') {
				curr++;
			} else {
				ans = max(ans, curr);
				curr = 0;
			}
		}
		ans = max(ans, curr);
		cout << ans + 1 << '\n';
	}
	return 0;
}