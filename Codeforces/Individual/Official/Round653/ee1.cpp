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
	int n, k;
	cin >> n >> k;
	vector<int> both, one, two;
	for(int i = 0; i < n; ++i) {
		int val, o, t;
		cin >> val >> o >> t;
		if(o && t) {
			both.push_back(val);
		} else if(o && !t) {
			one.push_back(val);
		} else if(!o && t) {
			two.push_back(val);
		}
	}
	if(sz(both) + sz(one) < k || sz(both) + sz(two) < k) {
		cout << -1 << '\n';
		return 0;
	}
	sort(all(both));
	sort(all(one));
	sort(all(two));
	ll ans = 0;
	for(int i = 0; i < min(sz(both), k); ++i) {
		ans += both[i];
	}
	int cp;
	for(cp = 0; cp < k - sz(both); cp++) {
		ans += one[cp] + two[cp];
	}
	int bp = min(k, sz(both)) - 1;
	for(int i = cp; i < min(sz(one), sz(two)) && bp >= 0; i++) {
		ll val = one[i] + two[i];
		if(val < both[bp]) {
			ans += val - both[bp--];
		} else {
			break;
		}
	}
	cout << ans << '\n';
	return 0;
}