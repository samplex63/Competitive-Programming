#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int) (x).size()

typedef long long ll;
typedef long double ld;

struct seg {
	int l, r, v, dont;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		vector<seg> vec(n);
		for(int i = 0; i < n; ++i) {
			cin >> vec[i].l >> vec[i].r >> vec[i].v;
		}
		bool flag = true;
		for(int i = 0; i < n - 1; ++i) {
			vector<seg> inter;
			for(int j = i + 1; j < n; ++j) if(vec[i].v == vec[j].v) {
				int li = max(vec[i].l, vec[j].l);
				int ri = min(vec[i].r, vec[j].r);
				if(ri >= li) {
					seg ob;
					ob.l = li;
					ob.r = ri;
					ob.v = vec[i].v;
					ob.dont = j;
					inter.push_back(ob);
				}
			}
			for(int j = 0; j < sz(inter); ++j) {
				for(int k = 0; k < n; ++k) if(vec[k].v == inter[j].v) {
					if(k == i || k == inter[k].dont) continue;
					int li = max(vec[k].l, inter[j].l);
					int ri = min(vec[k].r, inter[j].r);
					if(ri >= li) {
						flag = false;
						break;
					}
				}
				if(!flag) break;
			}
			if(!flag) break;
		}
		cout << (flag? "YES\n": "NO\n");
	}
	return 0;
}