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
		vector<int> a(n), b(n);
		for(int& x: a) cin >> x;
		for(int& x: b) cin >> x;
		sort(all(a));
		sort(all(b));
		int ap = 0, bp = n - 1;
		while(ap < n && bp >= 0 && k > 0 && a[ap] < b[bp]) {
			swap(a[ap++], b[bp--]);
			k--;
		}
		cout << accumulate(all(a), 0ll) << '\n';
	}
	return 0;
}