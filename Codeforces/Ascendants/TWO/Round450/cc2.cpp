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
	vector<bool> isR(n);
	int lar = -1;
	for(int i = 0; i < n; ++i) {
		if(cmx(lar, vec[i])) {
			isR[i] = true;
		}
	}
	int totr = count(all(isR), true);
	set<int> s{vec[0]};
	set<int> taken;
	vector<int> isRH(n + 1);
	for(int i = 0; i < n; ++i) {
		if(isR[i]) {
			isRH[vec[i]] = 1;
		}
	}
	map<int, int> mp;
	for(int i = 1; i < n; ++i) {
		if(!isR[i]) {
			auto it = s.upper_bound(vec[i]);
			// debug(vec[i], *it);

			if(*it == *s.rbegin()) {
				go++;
				if(isRH[*it] && !taken.count(*it)) {
					go--;
					debug(i, totr);
					taken.insert(*it);
				}
				mp[*it] = go;
			}
		}
		s.insert(vec[i]);
	}
	// for(auto& x: mp) {
	// 	if(isRH[x.fi]) x.se--;
	// }
	debug(mp);
	if(mp.empty()) {
		cout << 1 << '\n';
		return 0;
	}
	auto val = max_element(all(mp), [](auto a, auto b) { return a.se < b.se; });
	cout << val->fi << '\n';
	return 0;
}