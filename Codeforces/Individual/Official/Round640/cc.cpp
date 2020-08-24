#include <bits/stdc++.h>
using namespace std;

#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()

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
		int n, k;
		cin >> n >> k;
		int ans = k;
		int dir = k / n;
		int val = k % n;
		while(dir > 0) {
			ans += dir;
			dir = (dir + val) / n;
			// dir += val;
			val = ans % n;
		}
		cout << ans << '\n';
	}
	return 0;
}