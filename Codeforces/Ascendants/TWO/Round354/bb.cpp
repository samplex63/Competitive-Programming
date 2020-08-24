#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

template<class T> bool uin(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool uax(T &a, T b) { return a < b ? (a = b, true) : false; }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, t;
	cin >> n >> t;
	int cap = 1 << n;
	vector<vector<int>> vec(n, vector<int>(15));
	vec[0][1] = (t * cap - cap) / 2;
	int ans = 0;
	if(t >= 1) ans++;
	for(int i = 1; i < n; ++i) {
		for(int j = 1; j <= i + 1; ++j) {
			int rec = vec[i - 1][j - 1] + vec[i - 1][j];
			if(rec >= cap) ans++;
			int giv = (rec - cap) / 2;
			vec[i][j] = max(0, giv);
		}
	}
	cout << ans << '\n';
	// for(int i = 1; i < n; ++i) {
	// 	for(int j = 1; j <= i + 1; ++j) {
	// 		vec[i][j] = (vec[i - 1][j - 1] + vec[i - 1][j]) / 2;
	// 	}
	// }
	// for(int i = 0; i < n; ++i) {
	// 	for(int j = 1; j <= i + 1; ++j) {
	// 		cerr << setprecision(12) << fixed << ((ld) vec[i][j] / (1 << n)) << ' ';
	// 	}
	// 	cerr << '\n';
	// }

	return 0;
}