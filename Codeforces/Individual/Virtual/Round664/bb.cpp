#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

template<class T> bool uin(T& a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool uax(T& a, T b) { return a < b ? (a = b, true) : false; }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, x, y;
	cin >> n >> m >> x >> y;
	pair<int, int> st{x, y}, ne{1, y};
	cout << x << ' ' << y << '\n' << 1 << ' ' << y << '\n';// << "1 1\n";
	for(int i = 1; i <= n; ++i) {
		if(i & 1) {
			for(int j = 1; j <= m; ++j) {
				if(make_pair(i, j) == st || make_pair(i, j) == ne) {
					continue;
				}
				cout << i << ' ' << j << '\n';
			}
		} else {
			for(int j = m; j > 0; --j) {
				if(make_pair(i, j) == st) {
					continue;
				}
				cout << i << ' ' << j << '\n';
			}
		}
	}
	return 0;
}