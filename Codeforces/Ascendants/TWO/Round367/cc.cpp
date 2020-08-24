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
	cin >> n;
	vector<int> cost(n);
	for(int& x: cost) cin >> x;
	vector<string> vec(n);
	for(string& x: vec) cin >> x;
	vector<string> rev(n);
	for(int i = 0; i < n; ++i) {
		string go = vec[i];
		reverse(all(go));
		rev[i] = go;
	}
	vector<vector<ll>> dp(n, vector<ll>(2));
	dp[0][0] = 0;
	dp[0][1] = cost[0];
	auto comp = [&](int i) {
		ll a, b, c, d;

		if(vec[i] >= vec[i - 1]) a = dp[i - 1][0];
		else a = -1;

		if(rev[i] >= vec[i - 1]) b = dp[i - 1][0] + cost[i];
		else b = -1;

		if(vec[i] >= rev[i - 1]) c = dp[i - 1][1];
		else c = -1;

		if(rev[i] >= rev[i - 1]) d = dp[i - 1][1] + cost[i];
		else d = -1;
		return make_tuple(a, b, c, d);
	};
	const ll vl = ll(1e18);
	auto mymin = [&](ll a, ll b) {
		if(a == -1) a = vl;
		if(b == -1) b = vl;
		return min(a, b);
	};
	for(int i = 1; i < n; ++i) {
		ll a, b, c, d;
		tie(a, b, c, d) = comp(i);
		if(a == -1 && b == -1 && c == -1 && d == -1) {
			cout << -1 << '\n';
			return 0;
		}
		dp[i][0] = mymin(a, c);
		dp[i][1] = mymin(b, d);
	}
	ll val = min(dp[n - 1][0], dp[n - 1][1]);
	cout << (val >= vl ? -1 : val) << '\n';
	return 0;
}