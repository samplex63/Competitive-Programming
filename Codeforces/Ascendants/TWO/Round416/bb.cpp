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
	for(int mm = 0; mm < m; ++mm) {
		int l, r, x;
		cin >> l >> r >> x;
		l--;
		r--;
		x--;
		int less = 0;
		for(int i = l; i <= r; ++i) {
			if(i == x) continue;
			if(vec[i] < vec[x]) less++;
		}
		cout << ((less == x - l) ? "Yes" : "No") << '\n';
	}
	return 0;
}