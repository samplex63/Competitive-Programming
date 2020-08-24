#include <bits/stdc++.h>
using namespace std;

#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second

using ll = long long;
using ld = long double;

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

ll sum_over(ll a) {
	return ((a + 1) * a) / 2;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	ll x;
	cin >> n >> x;
	vector<ll> vec(n);
	for(ll& y: vec) cin >> y;
	vector<ll> cpy(vec.rbegin(), vec.rend());
	cpy.insert(cpy.begin(), 0);
	cpy.insert(cpy.end(), vec.rbegin(), vec.rend());

	vector<ll> pref(cpy);
	for(int i = 1; i < sz(pref); ++i) {
		pref[i] += pref[i - 1];
	}
	vector<__int128> hug_num(cpy);
	for(int i = 1; i < sz(cpy); ++i) {
		__int128& go = hug_num[i];
		go = ((go + 1) * go) / 2;
		go += hug_num[i - 1];
	}
	// debug(hug_num);
	int st = lower_bound(all(pref), x) - pref.begin();
	ll cur_ans = x;
	for(int i = st; i < sz(pref); ++i) {
		ll sval = x - cpy[i];
		auto it = lower_bound(all(pref), sval + pref[i]);
		if(it == pref.end()) continue;
		int id = it - pref.begin();
		ll temp_ans = hug_num[id - 1] - hug_num[i - 1];
		// debug(temp_ans);
		temp_ans += sum_over(cpy[id]) - sum_over(pref[id] - sval - pref[i]);
		// debug(pref[i], temp_ans, *it);
		cmx(cur_ans, temp_ans);
	}
	cout << cur_ans << '\n';
	return 0;
}