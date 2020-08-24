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
		int cnt = 0;
		pair<char, char> on, tw;
		for(int i = 0; i < n; ++i) {
			if(s[i] != p[i]) {
				cnt++;
				if(cnt == 1) {
					on.fi = s[i];
					on.se = p[i];
				} else {
					tw.fi = s[i];
					tw.se = p[i];
				}
			}
		}
		//~ cerr << cnt << ' ' << on.fi << ' ' << on.se << ' ' << tw.fi << ' ' << tw.se << '\n';
		if(cnt == 2 && on.fi == tw.fi && on.se == tw.se) cout << "Yes\n";
		else cout << "No\n";
	}

	return 0;
}