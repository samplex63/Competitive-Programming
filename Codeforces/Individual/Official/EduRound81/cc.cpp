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
	int tt;
	cin >> tt;
	while(tt--) {
		string s, t;
		cin >> s >> t;
		map<char, vector<int>> m;
		for(int i = 0; i < sz(s); ++i) {
			m[s[i]].push_back(i);
		}
		int ind = 0;
		int ans = 1;
		for (int i = 0; i < sz(t); ++i) {
			auto it = lower_bound(m[t[i]].begin(), m[t[i]].end(), ind);
			if (it != m[t[i]].end()) {
				ind = *it + 1;
			} else {
				ind = 0;
				ans++;
				it = lower_bound(m[t[i]].begin(), m[t[i]].end(), ind);
				if(it == m[t[i]].end()) {
					ans = -1;
					break;
				}
				ind = *it + 1;
			}
		}
		cout << ans << endl;
	}
	return 0;
}