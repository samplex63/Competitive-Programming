#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

template<class T> bool uin(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool uax(T &a, T b) { return a < b ? (a = b, true) : false; }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<int> vec(n);
	for(int& x: vec) cin >> x;
	vector<int> go;
	for(int i = 0; i < n; i += 2) {
		go.push_back(vec[i]);
	}
	for(int i = 1; i < n; i += 2) {
		go.push_back(vec[i]);
	}
	for(int i = 0; i < n; ++i) {
		go.push_back(go[i]);
	}
	ll val = 0;
	int len = (n + 1) / 2;
	for(int i = 0; i < len; ++i) {
		val += go[i];
	}
	ll ans = val;
	// for(int i = 0; i < sz(go); ++i) {
	// 	cerr << go[i] << ' ';
	// }
	// cerr << '\n';
	for(int i = 0; i < sz(go) - len; ++i) {
		val -= go[i];
		val += go[i + len];
		uax(ans, val);
	}
	cout << ans << '\n';
	return 0;
}