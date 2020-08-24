#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())

#define int long long

// using ll = long long;
using ld = long double;

const int MAXN = (int) 1e5 + 1;

signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	auto prime_facts = [&](int x) {
		map<int, int> ret;
		for(int i = 2; i * i <= x; ++i) {
			while(x % i == 0) {
				ret[i]++;
				x /= i;
			}
		}
		ret[x]++;
		return ret;
	};
	while(tt--) {
		int n, m;
		cin >> n >> m;
		bitset<MAXN> bl, bu, br, bd;
		bool ori = false;
		for(int i = 0; i < n; ++i) {
			int x;
			cin >> x;
			if(x == 0) {
				ori = true;
			} else if(x > 0) {
				br[x] = true;
			} else {
				bl[-x] = true;
			}
		}
		for(int i = 0; i < m; ++i) {
			int x;
			cin >> x;
			if(x == 0) {
				ori = true;
			} else if(x > 0) {
				bu[x] = true;
			} else {
				bd[-x] = true;
			}
		}
		int ans = 0;
		for(int i = 1; i < MAXN; ++i) {
			if(br[i]) {
				map<int, int> fct = prime_facts(i);
				int mini = 1;
				for(auto x: fct) {
					if(x.se & 1) mini *= x.fi;
				}
				int sqval = 1;
				for(auto x: fct) {
					for(int j = 0; j < (x.se + 1) / 2; ++j) {
						sqval *= x.fi;
					}
				}
				for(int j = 1; j * j < MAXN; ++j) {
					int des = mini * j * j;
					if(des > MAXN) break;
					if(bl[des]) {
						int des2 = sqval * j;
						if(des2 > MAXN) break;
						if(bu[des2]) ans++;
						if(bd[des2]) ans++;
					}
				}
			}
			if(bu[i]) {
				map<int, int> fct = prime_facts(i);
				int mini = 1;
				for(auto x: fct) {
					if(x.se & 1) mini *= x.fi;
				}
				int sqval = 1;
				for(auto x: fct) {
					for(int j = 0; j < (x.se + 1) / 2; ++j) {
						sqval *= x.fi;
					}
				}
				for(int j = 1; j * j < MAXN; ++j) {
					int des = mini * j * j;
					if(des > MAXN) break;
					if(bd[des]) {
						int des2 = sqval * j;
						if(des2 > MAXN) break;
						if(br[des2]) ans++;
						if(bl[des2]) ans++;
					}
				}
			}
		}
		if(ori) {
			int upc = (int) bu.count() + bd.count();
			ans += (int) ((int) bl.count() + bu.count()) * upc;
		}
		cout << ans << '\n';
	}
	return 0;
}