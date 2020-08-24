#include <bits/stdc++.h>
using namespace std;

#define sz(x) static_cast<int>((x).size())

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

template<class T> bool cmn(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool cmx(T &a, T b) { return a < b ? (a = b, true) : false; }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll u, v;
	cin >> u >> v;
	if(u == 0 && v == 0) {
		cout << 0 << '\n';
		return 0;
	}
	if(u == v) {
		cout << 1 << '\n' << u << '\n';
		return 0;
	}
	ll val1 = u & 1ll, val2 = v & 1ll;
	if(val1 != val2) {
		cout << -1 << '\n';
		return 0;
	}
	if(u > v) {
		cout << -1 << '\n';
		return 0;
	}
	ll and_val = (v - u) >> 1;
	ll check = u & and_val;
	cerr << "AND_VAL: " << check << '\n';
	if(check) {
		cout << 3 << '\n';
		cout << u << ' ' << and_val << ' ' << and_val << '\n';
	} else {
		cout << 2 << '\n';
		cout << v - and_val << ' ' << and_val << '\n';
	}
	return 0;
}