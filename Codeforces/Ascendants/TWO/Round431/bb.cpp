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
	int n;
	cin >> n;
	vector<int> vec(n);
	for(int& x: vec) cin >> x;
	bool ans_flag = false;
	for(int i = 1; i < n; ++i) {
		vector<bool> sub(n);
		for(int j = 0; j < n; ++j) {
			if(1ll * j * (vec[i] - vec[0]) == 1ll * i * (vec[j] - vec[0])) {
				sub[j] = true;
			} else {
				sub[j] = false;
			}
		}
		if(count(all(sub), true) == n) {
			continue;
		}
		int start = 0;
		for(int j = 0; j < n; ++j) {
			if(!sub[j]) {
				start = j;
				break;
			}
		}
		bool flag = true;
		for(int j = start + 1; j < n; ++j) {
			if(!sub[j]) {
				if(1ll * (j - start) * (vec[i] - vec[0]) != 1ll * i * (vec[j] - vec[start])) {
					flag = false;
					break;
				}
			}
		}
		if(flag) {
			ans_flag = true;
			break;
		}
	}
	auto getsl = [&](int i, int j) {
		pair<ll, ll> ret;
		ret.fi = vec[i] - vec[j];
		ret.se = i - j;
		ll g = __gcd(ret.fi, ret.se);
		ret.fi /= g;
		ret.se /= g;
		return ret;
	};
	if(!ans_flag) {
		set<pair<ll, ll>> st;
		for(int i = 2; i < n; ++i) {
			// debug(i, getsl(vec[i], 1));
			st.insert(getsl(i, 1));
		}
		// debug(st, *st.begin());
		// debug(getsl(1, 0));
		// debug(getsl(4, 1));
		if(sz(st) == 1 && getsl(1, 0) != *st.begin()) ans_flag = true;
	}
	cout << (ans_flag ? "Yes\n" : "No\n");
	return 0;
}