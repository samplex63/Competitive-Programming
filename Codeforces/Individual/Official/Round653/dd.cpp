#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

template<class T> bool cmn(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool cmx(T &a, T b) { return a < b ? (a = b, true) : false; }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--) {
		int n, k;
		cin >> n >> k;
		vector<int> vec(n);
		for(int& x: vec) cin >> x;
		map<int, int> mp;
		for(int i = 0; i < n; ++i) {
			int val = vec[i] % k;
			if(val != 0) mp[val]++;
		}
		if(mp.empty()) {
			cout << 0 << '\n';
			continue;
		}
		ll req = 0;
		for(auto x: mp) {
			ll val = ll(k - x.fi) + ll(x.se - 1) * k;
			cmx(req, val);
		}
		cout << req + 1 << '\n';
	}
	return 0;
}