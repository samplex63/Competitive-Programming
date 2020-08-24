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
		int n;
		cin >> n;
		if((n / 2) & 1) {
			cout << "NO\n";
		} else {
			cout << "YES\n";
			ll ns = n / 2;
			for(int i = 1; i <= ns; ++i) cout << 2 * i << ' ';
			for(int i = 1; i < n - 1; i += 2) cout << i << ' ';
			cout << (ns * (ns + 1)) - (ns - 1) * (ns - 1) << '\n';
		}
	}
	return 0;
}