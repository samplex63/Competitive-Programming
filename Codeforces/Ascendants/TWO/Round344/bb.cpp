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
	int n, m, k;
	cin >> n >> m >> k;
	vector<int> r(n), c(m), col(k + 1);
	for(int kk = 0; kk < k; ++kk) {
		int ty, pos;
		cin >> ty >> pos >> col[kk + 1];
		pos--;
		if(ty == 1) {
			r[pos] = kk + 1;
		} else {
			c[pos] = kk + 1;
		}
	}
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < m; ++j) {e
			cout << col[max(r[i], c[j])] << ' ';
		}
		cout << '\n';
	}
	return 0;
}