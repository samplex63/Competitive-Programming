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
	int n;
	cin >> n;
	set<ll> s;
	for(int i = 0; i < n; ++i) {
		ll x;
		cin >> x;
		s.insert(x);
	}
	for(ll i = 0; i <= 33; ++i) {
		ll val = 1ll << i;
		for(auto x: s) {
			if(s.count(x + val) && s.count(x - val)) {
				cout << 3 << '\n';
				cout << x - val << ' ' << x << ' ' << x + val << '\n';
				return 0;
			}
		}
	}
	for(ll i = 0; i <= 33; i++) {
		ll val = 1ll << i;
		for(auto x: s) {
			if(s.count(x + val)) {
				cout << 2 << '\n';
				cout << x << ' ' << x + val << '\n';
				return 0;
			}
		}
	}
	cout << 1 << '\n';
	cout << *s.begin() << '\n';
	return 0;
}