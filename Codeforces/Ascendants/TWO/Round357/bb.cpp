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
	ll n;
	cin >> n;
	const ll on = 1234567;
	const ll tw = 123456;
	const ll th = 1234;
	for(ll i = 0; i <= n / on; ++i) {
		for(ll j = 0; j <= n / tw; ++j) {
			ll val = on * i + tw * j;
			if((n - val) >= 0) {
				if((n - val) % th == 0) {
					cout << "YES\n";
					return 0;
				}
			}
		}
	}
	cout << "NO\n";
	return 0;
}