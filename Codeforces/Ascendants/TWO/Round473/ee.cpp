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

ll solve(ll a) {
	if(a == 0) return 0;
	ll val = a / 2;
	if(a & 1) {
		return 2 * solve(val) + val + 1;
	} else {
		return 2 * solve(val) + val;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	cout << solve(n - 1) << '\n';
	return 0;
}