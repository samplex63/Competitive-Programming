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
	double ans = 0;
	vector<double> vec(n);
	// vector<int> kilos(n);
	for(int i = 0; i < n; ++i) {
		int x, y;
		cin >> x >> y;
		// kilos[i] = y;
		vec[i] = double(x) / y;
	}
	sort(all(vec));
	ans = vec[0] * m;
	// for(int i = 0; i < n && m > 0; ++i) {
	// 	int cur = min(m, kilos[i]);
	// 	ans += vec[i] * cur;
	// 	m -= cur;
	// }
	cout << setprecision(12) << fixed << ans << '\n';
	return 0;
}