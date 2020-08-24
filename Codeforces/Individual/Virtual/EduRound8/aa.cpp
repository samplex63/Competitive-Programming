#include <bits/stdc++.h>
using namespace std;

#define sz(x) static_cast<int>((x).size())

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

template<class T> bool cmn(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool cmx(T &a, T b) { return a < b ? (a = b, true) : false; }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, b, p;
	cin >> n >> b >> p;
	int ans = 0;
	int nsub = n;
	while(n > 1) {
		int ti = (int) log2(n);
		ti = 1 << ti;
		// cerr << n << ' ' << ti << '\n';
		n = ti / 2 + (n - ti);
		ans += ti * (2 * b + 1);
	}
	cout << ans / 2 << ' ' << nsub * p << '\n';
	return 0;
}