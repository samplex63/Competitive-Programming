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
	int n, m;
	cin >> n >> m;
	vector<int> vec(n);
	for(int& x: vec) cin >> x;
	int ans = 0;
	for(int i = 0; i < m; ++i) {
		int x, y;
		cin >> x >> y;
		x--;
		y--;
		int val = 0;
		for(int j = x; j <= y; ++j) {
			val += vec[j];
		}
		if(val < 0) continue;
		ans += val;
	}
	cout << ans << '\n';
	return 0;
}