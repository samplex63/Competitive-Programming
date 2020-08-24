#include <bits/stdc++.h>
using namespace std;

#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

template<class T> bool cmn(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool cmx(T &a, T b) { return a < b ? (a = b, true) : false; }

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
	int n, m, k;
	cin >> n >> m >> k;
	for(int i = 0; i < k; ++i) {
		int x, y;
		cin >> x >> y;
	}
	for(int i = 0; i < k; ++i) {
		int x, y;
		cin >> x >> y;
	}
	n--;
	m--;
	cout << (n + m + m * (n + 1) + n) << '\n' << string(n, 'U') << string(m, 'L');
	for(int i = 0; i <= n; ++i) {
		if(i & 1) {
			cout << string(m, 'L');
		} else {
			cout << string(m, 'R');
		}
		if(i < n) cout << 'D';
	}
	// int maxL = 0, maxR = 0, maxU = 0, maxD = 0;
	// int xc = 0, yc = 0;
	// string ans = "";
	// for(int i = 0; i < k; ++i) {
	// 	int xx = go[i].first - vec[i].first;
	// 	int yy = go[i].second - vec[i].second;
	// 	debug(xx, yy);
	// 	for(int j = i + 1; j < k; ++j) {
	// 		vec[j].first += xx;
	// 		cmx(vec[j].first, 1);
	// 		cmn(vec[j].first, n);
	// 		vec[j].second += yy;
	// 		cmx(vec[j].second, 1);
	// 		cmn(vec[j].second, m);
	// 	}
	// 	debug(vec);
	// 	if(xx < 0) {
	// 		// maxL -= xx;
	// 		ans += string(-xx, 'U');
	// 	} else {
	// 		// maxR += xx;
	// 		ans += string(xx, 'D');
	// 	}
	// 	if(yy < 0) {
	// 		// maxD -= yy;
	// 		ans += string(-yy, 'L');
	// 	} else {
	// 		// maxU += yy;
	// 		ans += string(yy, 'R');
	// 	}
	// 	// if(vec[i].first > go[i].first) {
	// 	// 	cmx(maxL, vec[i].first - go[i].first);
	// 	// } else {
	// 	// 	cmx(maxR, go[i].first - vec[i].first);
	// 	// }
	// 	// if(vec[i].second > go[i].second) {
	// 	// 	cmx(maxD, vec[i].second - go[i].second);
	// 	// } else {
	// 	// 	cmx(maxU, go[i].second - vec[i].second);
	// 	// }
	// }
	// // debug(maxL, maxR, maxD, maxU);
	// // int sum = maxL + maxR + maxD + maxU;
	// // if(sum > 2 * n * m) {
	// // 	cout << "-1\n";
	// // } else {
	// // 	cout << sum << '\n';
	// // 	cout << string(maxL, 'U') << string(maxR, 'D') << string(maxU, 'R') << string(maxD, 'L') << '\n';
	// // }
	// cout << min(sz(ans), 2 * n * m) << '\n' << ans.substr(0, 2 * n * m) << '\n';
	return 0;
}