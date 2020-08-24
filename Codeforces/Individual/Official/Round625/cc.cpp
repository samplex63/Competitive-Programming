#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
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
#ifdef LOCAL
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#else
#define debug(...) 0
#endif

int n;
map<int, int> m;
void foo(const string& s) {
	vector<int> del;
	for(int i = 1; i < sz(s); ++i) {
		if(s[i] - s[i - 1] == 1) {
			del.push_back(i);
		} else if(s[i - 1] - s[i] == 1) {
			del.push_back(i - 1);
		}
	}
	del.erase(unique(del.begin(), del.end()), del.end());
	if(m[sz(s) - 1] >= sz(del)) {
		return;
	}
	m[sz(s) - 1] = sz(del);
	// debug(del);
	if(!del.empty()) {
		n = sz(s) - 1;
	}
	for(int i = 0; i < sz(del); ++i) {
		string go = s;
		go.erase(go.begin() + del[i]);
		foo(go);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	string s;
	cin >> s;
	s.erase(unique(s.begin(), s.end()), s.end());
	int sub = sz(s);
	int uc = n - sz(s);
	foo(s);
	cout << sub - n + uc << '\n';
	// cerr << (1.0 * clock()) / CLOCKS_PER_SEC << '\n';
	return 0;
}