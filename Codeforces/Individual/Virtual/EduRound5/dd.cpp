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
	vector<int> vec(n);
	for(int i = 0; i < n; ++i) {
		cin >> vec[i];
	}
	map<int, int> m;
	auto getInd = [&](int start) {
		// debug(start, m);
		int ind;
		for(ind = start; ind < n; ++ind) {
			m[vec[ind]] = ind;
			if(sz(m) == k) {
				if(ind < n) {
					if(m.count(vec[ind + 1])) {
						continue;
					} else {
						return ind;
					}
				} else {
					return n - 1;
				}
			}
		}
		return min(n - 1, ind);
	};
	int ind = getInd(0);
	// debug(ind);
	int ed = ind + 1;
	int wind_start = 0;
	vector<pair<int, int>> lens{{1, min(n, ed)}};

	for(int i = ind; i < n; ++i) {
		if(!m.count(vec[i])) {
			int val = vec[wind_start];
			int last = m[val];
			debug(vec[i], last);
			m.clear();
			wind_start = last + 1;
		 	// st = ind;
			ind = getInd(wind_start);
			lens.emplace_back(wind_start + 1, min(n, ind + 1));
		}
		m[vec[i]] = i;
	}
	debug(lens);
	auto it = max_element(lens.begin(), lens.end(), [](pair<int, int> a, pair<int, int> b) { return a.second - a.first < b.second - b.first; });
	cout << it->first << ' ' << it->second << '\n';
	return 0;
}