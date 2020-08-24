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
	vector<ll> vec(n);
	for(ll& x: vec) cin >> x;
	ll ans = 0;
	for(int i = 0; i < n; ++i) {
		for(int j = i; j < n; ++j) {
			for(int k = j; k < n; ++k) {
				cmx(ans, (vec[i] | vec[j] | vec[k]));
			}
		}
	}
	cout << ans << '\n';
	return 0;
}