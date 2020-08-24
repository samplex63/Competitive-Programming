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
		int n;
		ll x;
		cin >> n >> x;
		vector<ll> vec(n);
		for(ll& y: vec) cin >> y;
		int pos1 = -1;
		for(int i = 0; i < n; ++i) {
			if(vec[i] % x != 0) {
				pos1 = i + 1;
				break;
			}
		}
		if(pos1 == -1) {
			cout << -1 << '\n';
			continue;
		}
		int pos2 = -1;
		for(int i = n - 1; i >= 0; --i) {
			if(vec[i] % x != 0) {
				pos2 = n - i;
				break;
			}
		}
		ll sum = accumulate(all(vec), 0ll);
		cerr << sum << ' ' << pos1 << ' ' << pos2 << '\n';
		if(sum % x == 0) {
			cout << n - min(pos1, pos2) << '\n';
		} else {
			cout << n << '\n';
		}
	}
	return 0;
}