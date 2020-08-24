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
	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		vector<int> vec(n);
		for(int i = 0; i < n; ++i) cin >> vec[i];
		vector<bool> go1(n);
		go1[0] = true;
		for(int i = 1; i < n; ++i) {
			if(vec[i] > vec[i - 1]) go1[i] = true;
		}
		vector<bool> go2(n);
		go2[0] = true;
		for(int i = 1; i < n; ++i) {
			if(vec[i] < vec[i - 1]) go2[i] = true;
		}
		auto get = [&](const vector<bool>& go) {
			int st = 1;
			while(st < n && go[st]) st++;
			vector<int> ret{vec[0]};
			for(int i = st; i < n; ++i) {
				int lem = i;
				while(i < n && go[i] == go[lem]) i++;
				ret.push_back(vec[i - 1]);
				i--;
			}
			return ret;
		};
		vector<int> v1 = get(go1), v2 = get(go2);
		vector<int> ans;
		if(sz(v1) > sz(v2)) {
			ans = v1;
		} else {
			ans = v2;
		}
		cout << sz(ans) << '\n';
		for(int x: ans) cout << x << ' ';
		cout << '\n';
	}
	return 0;
}