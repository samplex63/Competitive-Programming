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
		vector<int> vec(n);
		for(int i = 0; i < n; ++i) {
			vec[i] = 1 << (i + 1);
		}
		int ans = 0;
		for(int i = 0; i < n / 2 - 1; ++i) {
			ans += vec[i];
		}
		ans += vec.back();
		// cerr << ans << '\n';
		for(int i = n / 2 - 1; i < n - 1; ++i) {
			ans -= vec[i];
		}
		cout << ans << '\n';
	}
	return 0;
}