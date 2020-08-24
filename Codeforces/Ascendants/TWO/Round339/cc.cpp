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
	ll l, r;
	cin >> n >> l >> r;
	auto dist = [&](ll x2, ll y2) {
		return sqrt(ld((l - x2) * (l - x2) + (r - y2) * (r - y2)));
	};
	ld mini = 1e20;
	ld maxi = -1e20;
	for(int i = 0; i < n; ++i) {
		ll x, y;
		cin >> x >> y;
		ld di = dist(x, y);
		cmn(mini, di);
		cmx(maxi, di);
	}
	mini *= mini;
	maxi *= maxi;
	
	ld val = acos(-1.0L) * (maxi - mini);
	cout << setprecision(15) << fixed << val << '\n';
	return 0;
}