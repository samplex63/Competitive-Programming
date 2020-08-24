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

	#ifdef LOCAL
	freopen("in", "r", stdin);
	#endif
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		string s, p;
		cin >> s >> p;
		vector<int> ha(26, 0);
		for(int i = 0; i < n; ++i) ha[s[i] -'a']++, ha[p[i]- 'a']++;
		vector<pair<int, int>> ans;
		for(int i = 0; i < n; ++i) {
			if(s[i] != p[i]) {
				for(int j = i + 1; j < n; ++j) {
					if(s[j] == s[i]) {
						swap(s[j], p[i]);
						ans.emplace_back(j, i);
						break;
					} else if(p[j] == s[i]) {
						swap(s[j], p[j]);
						swap(s[j], p[i]);
						ans.emplace_back(j, j);
						ans.emplace_back(j, i);
						break;
					}
				}
				//~ assert(s[i] == p[i]);
			}
		}
		if(s == p) {
			cout << "Yes\n";
			cout << ans.size() << '\n';
			for(int i = 0; i < sz(ans); ++i) cout << ans[i].fi + 1 << ' ' << ans[i].se + 1 << '\n';
		} else {
			cout << "No\n";
		}
	}
	return 0;
}