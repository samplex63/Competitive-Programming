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
		int n, k;
		cin >> n >> k;
		vector<int> vec(n);
		for(int& x: vec) cin >> x;
		set<int> st(all(vec));
		if(sz(st) > k) {
			cout << "-1\n";
			continue;
		}
		cout << sz(st) * n + max(0, k - sz(st)) * n << '\n';
		for(int i = 0; i < n; ++i) {
			for(int x: st) {
				cout << x << ' ';
			}
			for(int j = 0; j < k - sz(st); ++j) {
				cout << *st.rbegin() << ' ';
			}
		}
		cout << '\n';
	}
	return 0;
}