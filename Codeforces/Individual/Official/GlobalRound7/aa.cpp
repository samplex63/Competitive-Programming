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
		string ans(n, '2');
		ans[n - 1] = '3';
		if((n - 1) % 3 == 0) {
			if(n > 1) {
				ans[n - 2] = '3';
			} else {
				ans = "-1";
			}
		}
		cout << ans << '\n';
	}
	return 0;
}