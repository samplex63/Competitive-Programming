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
	ll n;
	cin >> n;
	ll ans = 0;
	for(int i = 0; i < 62; ++i) {
		ans += n / 2 * (1ll << i);
		n = (n + 1) / 2;
	}
	cout << ans << '\n';
	return 0;
}