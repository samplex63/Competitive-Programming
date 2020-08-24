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
	int n, m;
	cin >> n >> m;
	vector<ll> vec(n), v(m);
	for(ll& x: vec) cin >> x;
	for(ll& y: v) cin >> y;
	ll mi = ll(1e18);
	for(int i = 0; i < n; ++i) {
		ll val = -ll(1e18);
		for(int k = 0; k < n; ++k) {
			if(k == i) continue;
			for(int j = 0; j < m; ++j) {
				cmx(val, vec[k] * v[j]);
			}
		}
		cmn(mi, val);
	}
	cout << mi << '\n';
	return 0;
}