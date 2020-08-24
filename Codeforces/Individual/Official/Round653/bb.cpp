#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
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
		int cnt2 = 0;
		while(n % 2 == 0) {
			cnt2++;
			n /= 2;
		}
		int cnt3 = 0;
		while(n % 3 == 0) {
			cnt3++;
			n /= 3;
		}
		if(n > 1 || cnt2 > cnt3) {
			cout << -1 << '\n';
		} else {
			cout << (2 * cnt3 - cnt2) << '\n';
		}
	}
	return 0;
}