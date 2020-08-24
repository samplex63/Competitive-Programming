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
	int n;
	cin >> n;
	cout << "YES\n";
	for(int i = 0; i < n; ++i) {
		int x, xx, y, yy;
		cin >> x >> y >> xx >> yy;
		int val1 = x & 1;
		int val2 = y & 1;
		cout << (2 * val1 + val2) + 1 << '\n';
	}
	return 0;
}