#include <bits/stdc++.h>
using namespace std;

#define sz(x) static_cast<int>((x).size())

using ll = long long;
using ld = long double;

template <typename A, typename B> string to_string(pair<A, B> p);
template <typename A, typename B, typename C> string to_string(tuple<A, B, C> p);
string to_string(const string& s) { return '"' + s + '"'; }
string to_string(const char* s) { return to_string((string) s); }
string to_string(bool b) { return (b ? "true" : "false"); }
string to_string(vector<bool> v) {
	bool first = true;
	string res = "{";
	for (int i = 0; i < static_cast<int>(v.size()); i++) {
		if (!first) {
			res += ", ";
		}
		first = false;
		res += to_string(v[i]);
	}
	res += "}";
	return res;
}
template <size_t N>
string to_string(bitset<N> v) {
	string res = "";
	for (size_t i = 0; i < N; i++) {
		res.push_back(static_cast<char>('0' + v[i]));
	}
	return res;
}
template <typename A>
string to_string(A v) {
	bool first = true;
	string res = "{";
	for (const auto &x : v) {
		if (!first) {
			res += ", ";
		}
		first = false;
		res += to_string(x);
	}
	res += "}";
	return res;
}
template <typename A, typename B>
string to_string(pair<A, B> p) { return "(" + to_string(p.first) + ", " + to_string(p.second) + ")"; }
template <typename A, typename B, typename C>
string to_string(tuple<A, B, C> p) {
	return "(" + to_string(get<0>(p)) + ", " + to_string(get<1>(p)) + ", " + to_string(get<2>(p)) + ")";
}
void debug_out() { cerr << endl; }
template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T) {
	cerr << " " << to_string(H);
	debug_out(T...);
}
#ifdef LOCAL
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#else
#define debug(...) 0
#endif

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, h, l, r;
	cin >> n >> h >> l >> r;
	vector<int> vec(n);
	cin >> vec[0];
	for(int i = 1; i < n; ++i) {
		cin >> vec[i];
		vec[i] = (vec[i] + vec[i - 1]) % h;
	}
	vector<vector<bool>> dp(n + 1, vector<bool>(n, false));
	auto check = [&](int go) {
		if(go >= l && go <= r) {
			return true;
		}
		return false;
	};
	for(int i = 0; i < n; ++i) {
		dp[0][i] = check(vec[i]);
	}
	for(int i = 1; i <= n; ++i) {
		for(int j = i - 1; j < n; ++j) {
			vec[j] = (vec[j] - 1 + h) % h;
		}
		debug(i, vec);
		for(int j = 0; j < n; ++j) {
			dp[i][j] = dp[i - 1][j] || check(vec[j]);
		}
	}
	for(int i = 1; i <= n; ++i) {
		for(int j = 0; j < n; ++j) {
			cerr << dp[i][j];
		}
		cerr << '\n';
	}

	int ans = 0;
	for(int i = 0; i < n; ++i) {
		ans += dp[n][i];
	}
	cout << ans << '\n';
	return 0;
}