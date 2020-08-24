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
		vector<int> vec(n);
		for(int& x: vec) cin >> x;
		int oc = 0, ec = 0;
		for(int i = 0; i < n; ++i) {
			ec += vec[i] % 2 == 0 && i % 2 != 0;
			oc += (vec[i] & 1) && (i % 2 == 0);
		}
		if(ec == oc) {
			cout << ec << '\n';
		} else {
			cout << -1 << '\n';
		}
	}
	return 0;
}