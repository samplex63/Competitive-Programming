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
	int r, d, n;
	cin >> r >> d >> n;
	int c1 = r - d;
	int ans = 0;
	auto dist = [&](ld x, ld y) {
		return sqrt(x * x + y * y);
	};
	const ld epis = 1e-9;
	for(int i = 0; i < n; ++i) {
		int x, y, sr;
		cin >> x >> y >> sr;
		ld rad_dist = dist(x, y);
		// cerr << i << ": " << setprecision(12) << fixed << (rad_dist - sr) << ' ' << (rad_dist + sr) << '\n';
		if((rad_dist - sr) - ld(c1) >= -epis && ld(r) - (rad_dist + sr) >= -epis) {
			// cerr << i << ":\n";
			ans++;
		}
	}
	cout << ans << '\n';
	return 0;
}