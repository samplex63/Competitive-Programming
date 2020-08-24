#include <bits/stdc++.h>
using namespace std;

#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second

using ll = long long;
using ld = long double;

template<class T> bool cmn(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool cmx(T &a, T b) { return a < b ? (a = b, true) : false; }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--) {
		ld h, c, t;
		cin >> h >> c >> t;
		if(h == t) {
			cout << 1 << '\n';
			continue;
		}
		if(t <= (h + c) / 2) {
			cout << 2 << '\n';
			continue;
		}
		ld val = (h - t) / (2 * t - c - h);
		cout << 2ll * (abs(t - floor(val)) <= abs(t - ceil(val)) ? floor(val) : ceil(val)) + 1 << '\n';
	}
	return 0;
}