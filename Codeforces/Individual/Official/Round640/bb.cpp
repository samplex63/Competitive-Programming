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
		k--;
		if(n - k > 0 && (n - k) & 1) {
			cout << "YES\n";
			for(int i = 0; i < k; ++i) cout << 1 << ' ';
			cout << n - k << '\n';
		} else if(n - 2 * k > 0 && (n - 2 * k) % 2 == 0) {
			cout << "YES\n";
			for(int i = 0; i < k; ++i) cout << 2 << ' ';
			cout << n - 2 * k << '\n';
		} else {
			cout << "NO\n";
		}
	}
	return 0;
}