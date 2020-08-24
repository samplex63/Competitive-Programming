#include <bits/stdc++.h>
using namespace std;

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
		int n, x, m;
		cin >> x >> n >> m;
		while(x > 10 && n > 0) {
			x /= 2;
			x += 10;
			n--;
		}
		// cerr << x << '\n';

		if(x > m * 10) {
			cout << "NO\n";
		} else {
			cout << "YES\n";
		}
	}
	return 0;
}