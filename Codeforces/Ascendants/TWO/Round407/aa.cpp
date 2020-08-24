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
	int n;
	ll k;
	cin >> n >> k;
	ll ans = 0;
	vector<ll> vec(n);
	ll cnt = 0;
	for(int i = 0; i < n; ++i) {
		cin >> vec[i];
		ans += (vec[i]) / k;
		vec[i] %= k;
		cnt += vec[i] > 0;
	}
	cout << (ans + cnt + 1) / 2 << '\n';
	return 0;
}