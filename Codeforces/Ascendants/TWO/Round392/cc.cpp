#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()

using ll = long long;
using ld = long double;
using vi = vector<int>;
using pii = pair<int, int>;

template<class T> bool cmn(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool cmx(T &a, T b) { return a < b ? (a = b, true) : false; }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, x, y;
	ll k;
	cin >> n >> m >> k >> x >> y;
	if(n == 1) {
		vector<ll> vec(m, k / m);
		ll rem = k % m;
		for(int i = 0; i < rem; ++i) {
			vec[i]++;
		}
		cout << *max_element(all(vec)) << ' ' << *min_element(all(vec)) << ' ' << vec[y - 1] << '\n';
		return 0;
	}
	ll ok = 2 * (n - 1) * m;
	ll dis = k / ok;
	vector<vector<ll>> vec(n, vector<ll>(m, dis));
	for(int i = 1; i < n - 1; ++i) {
		for(int j = 0; j < m; ++j) {
			vec[i][j] += dis;
		}
	}
	ll rem = k % ok;
	for(int i = 0; i < n && rem > 0; ++i) {
		for(int j = 0; j < m && rem > 0; ++j) {
			vec[i][j]++;
			rem--;
		}
	}
	for(int i = n - 2; i >= 0 && rem > 0; --i) {
		for(int j = 0; j < m && rem > 0; ++j) {
			vec[i][j]++;
			rem--;
		}
	}
	ll min_ans = 2e18, max_ans = -2e18;
	for(int i = 0; i < n; ++i) {
		auto dob = minmax_element(all(vec[i]));
		cmn(min_ans, dob->fi);
		cmx(max_ans, dob->se);
	}
	cout << max_ans << ' ' << min_ans << ' ' << vec[x - 1][y - 1] << '\n';
	return 0;
}
