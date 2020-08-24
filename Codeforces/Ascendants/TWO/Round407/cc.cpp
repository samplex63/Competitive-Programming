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
	int n;
	cin >> n;
	vector<int> vec(n);
	for(int& x: vec) cin >> x;
	vector<ll> pref(n - 1);
	for(int i = 0; i < n - 1; ++i) {
		pref[i] = abs(ll(vec[i]) - vec[i + 1]) * (i % 2 ? -1 : 1);
	}
	ll ans = 0, cur = 0;
	for(int i = 0; i < n - 1; ++i) {
		cur += pref[i];
		cmx(ans, cur);
		cmx(cur, 0ll);
	}
	cur = 0;
	for(int i = 0; i < n - 1; ++i) {
		cur -= pref[i];
		cmx(ans, cur);
		cmx(cur, 0ll);
	}
	cout << ans << '\n';
	return 0;
}