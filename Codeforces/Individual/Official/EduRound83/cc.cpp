#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())

using ll = long long;
using ld = long double;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--) {
		ll n, k;
		cin >> n >> k;
		vector<ll> pows;
		ll ok = 1;
		while(ok <= (ll) 1e16) {
			pows.push_back(ok);
			ok *= k;
		}
		bool flag = true;
		vector<int> dis;
		for(int i = 0; i < n; ++i) {
			ll x;
			cin >> x;
			if(flag) {
				vector<int> sub;
				while(x > 0) {
					auto it = upper_bound(pows.begin(), pows.end(), x) - 1;
					sub.push_back(it - pows.begin());
					x -= *it;
				}
				if(x == 0) {
					dis.insert(dis.end(), sub.begin(), sub.end());
				} else {
					flag = false;
				}
			}
		}
		set<ll> s(dis.begin(), dis.end());
		flag &= sz(s) == sz(dis);
		cout << (flag? "YES" : "NO") << '\n';
	}
	return 0;
}