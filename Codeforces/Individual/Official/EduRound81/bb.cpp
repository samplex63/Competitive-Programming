#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())

typedef long long ll;
typedef long double ld;

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
		res += static_cast<char>('0' + v[i]);
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
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, x;
		string s;
		cin >> n >> x >> s;
		int ans = 0;
		int cnt = 0, cnt1 = 0, cnt0 = 0;
		for (int i = 0; i < n; ++i) {
			if (x == cnt) ans++;
			if (s[i] == '0') {
				cnt++;
				cnt0++;
			} else {
				cnt--;
				cnt1++;
			}
		}
		int diff = cnt0 - cnt1;
		if (diff == 0) {
			if (ans > 0) {
				cout << -1 << '\n';
			} else {
				cout << 0 << '\n';
			}
			continue;
		}
		int cntt = 0;
		if (diff > 0 && x > 0) {
			if ((x - 1) / diff == 0) {
				for (int i = 0; i < n; ++i) {
					if (x == cntt) ans++;
					s[i % n] == '0' ? cntt++ : cntt--;	
				}
			} else {
				x -= diff * ((x - 1) / diff);
				for (int i = 0; i < 2 * n; ++i) {
					if (x == cntt) ans++;
					s[i % n] == '0' ? cntt++ : cntt--;
				}
			}
		} else if (diff < 0 && x < 0) {
			if ((x + 1) / diff == 0) {
				for (int i = 0; i < n; ++i) {
					if (x == cntt) ans++;
					s[i % n] == '0' ? cntt++ : cntt--;	
				}
			} else {
				x += diff * ((x + 1) / diff);
				for (int i = 0; i < 2 * n; ++i) {
					if (x == cntt) ans++;
					s[i % n] == '0' ? cntt++ : cntt--;
				}
			}
		}
		cout << ans << '\n';
	}
	return 0;
}