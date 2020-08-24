#include <bits/stdc++.h>
using namespace std;

#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

template<class T> bool cmn(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool cmx(T &a, T b) { return a < b ? (a = b, true) : false; }

ld power(ld x, int y) {
	ld res = 1;
	while(y > 0) {
		if(y & 1) res *= x;
		y /= 2;
		x *= x;
	}
	return res;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ld n;
	int t;
	cin >> n >> t;
	ld num = 1 + 1e-8 + 1e-9;
	ld ans = power(num, t);
	cout << setprecision(10) << fixed << ans * n << '\n';
	return 0;
}