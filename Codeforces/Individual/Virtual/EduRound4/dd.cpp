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
	int n, k;
	cin >> n >> k;
	vector<pair<int, int>> vec(2 * n);
	for(int i = 0; i < n; ++i) {
		int x, y;
		cin >> x >> y;
		vec[2 * i].first = x;
		vec[2 * i].second = 0;
		vec[2 * i + 1].first = y;
		vec[2 * i + 1].second = 1;
	}
	sort(vec.begin(), vec.end());
	int cur = 0;
	int lo = vec[0].first;
	set<pair<int, int>> ans;

	for(int i = 0; i < 2 * n; ++i) {
		if(vec[i].second) {
			if(cur >= k) {
				ans.emplace(lo, vec[i].first);
				lo = vec[i].first;
			}
			cur--;
		} else {
			cur++;
			if(cur == k) {
				lo = vec[i].first;
			}
		}
	}
	// debug(ans);
	if(ans.empty()) {
		cout << 0 << '\n';
		return 0;
	}
	auto it1 = ans.begin();
	while(next(it1) != ans.end()) {
		auto it2 = next(it1);
		if(it1->second == it2->first) {
			int x1 = it1->first;
			int x2 = it2->second;
			ans.erase(it1);
			ans.erase(it2);
			ans.emplace(x1, x2);
			it1 = ans.find({x1, x2});
		} else {
			it1++;
		}
	}

	cout << sz(ans) << '\n';
	for(auto x: ans) {
		cout << x.first << ' ' << x.second << '\n';
	}

	return 0;
}