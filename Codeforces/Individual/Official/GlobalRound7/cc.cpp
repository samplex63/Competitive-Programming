#include <bits/stdc++.h>
using namespace std;

#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

template<class T> bool cmn(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool cmx(T &a, T b) { return a < b ? (a = b, true) : false; }

const ll mod = 998244353;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k;
	cin >> n >> k;
	vector<int> vec(n);
	for(int i = 0; i < n; ++i) cin >> vec[i];
	ll sub = n - k;
	auto sum_over = [&] (ll kk) -> ll {
		return (kk * (kk + 1)) / 2;
	};
	ll ans = sum_over(n) - sum_over(sub);
	cout << ans << ' ';
	ans = 1;
	int pos = -1;
	for(int i = 0; i < n; ++i) {
		if(vec[i] > sub) {
			if(pos == -1) {
				pos = i;
				continue;
			}
			ans *= i - pos;
			pos = i;
			ans %= mod;
		}
	}
	cout << ans << '\n';

	return 0;
}