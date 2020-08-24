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

string prefix_palindrome(const string& ss) {
	for(int i = 0; i < sz(ss); ++i) {
		int start = i;
		int cur_last = sz(ss) - 1;
		while(ss[i] == ss[cur_last]) {
			if(i + 1 == cur_last || i == cur_last) {
				return ss.substr(start);
			}
			i++;
			cur_last--;
		}
	}
	return "";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--) {
		string inp;
		cin >> inp;
		int n = sz(inp);
		int len = 0;

		for(int i = 0; i < n / 2; ++i) {
			if(inp[i] == inp[n - i - 1]) {
				len++;
			} else {
				break;
			}
		}
		string ans_1 = "", ans_2 = "", ans_3 = "";

		for(int i = 0; i <= len; ++i) {
			string a = inp.substr(0, i);
			string b = inp.substr(i, n - 2 * i);
			string c = inp.substr(n - i);

			string ans1 = prefix_palindrome(b);
			reverse(all(b));
			string ans2 = prefix_palindrome(b);
			reverse(all(ans2));

			if(sz(ans1) < sz(ans2)) {
				ans1 = ans2;
			}
			if(sz(ans_1) + sz(ans_2) + sz(ans_3) < sz(a) + sz(c) + sz(ans1)) {
				ans_1 = a;
				ans_2 = ans1;
				ans_3 = c;
			}
		}

		// string a = inp.substr(0, len);
		// string b = inp.substr(len, n - 2 * len);
		// string c = inp.substr(n - len);

		// string ans3 = prefix_palindrome(inp);
		// reverse(all(inp));
		// string ans4 = prefix_palindrome(inp);
		// reverse(all(ans4));

		// if(sz(ans1) < sz(ans2)) {
		// 	ans1 = ans2;
		// }
		// if(sz(ans1) + sz(a) + sz(c) < sz(ans3) || sz(ans1) + sz(a) + sz(c) < sz(ans4)) {
		// 	debug("HERE");
		// 	a = "";
		// 	c = "";
		// 	if(sz(ans3) < sz(ans4)) {
		// 		ans3 = ans4;
		// 	}
		// 	ans1 = ans3;
		// }
		cout << ans_1 << ans_2 << ans_3 << '\n';
	}
	return 0;
}