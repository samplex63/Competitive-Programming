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
		int a, b, c;
		cin >> a >> b >> c;
		if(c <= a) {
			cout << -1 << ' ' << b << '\n';
		} else {
			cout << 1 << ' ';
			if(ll(a) * b <= ll(c)) {
				cout << -1 << '\n';
			} else {
				cout << b << '\n';
			}
		}
	}
	return 0;
}