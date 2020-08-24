#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())

typedef long long ll;
typedef long double ld;

string to_string(const string& s) { return '"' + s + '"'; }
string to_string(const char* s) { return to_string((string) s); }
string to_string(bool b) { return (b ? "true" : "false"); }
string to_string(vector<bool> v) {
	bool first = true;
	string res = "{";
	for(int i = 0; i < static_cast<int>(v.size()); i++) {
	    if (!first) res += ", ";
		first = false;
		res += to_string(v[i]);
	}
	res += "}";
	return res;
}
template <size_t N>
string to_string(bitset<N> v) {
	string res = "";
	for(size_t i = 0; i < N; i++) res += static_cast<char>('0' + v[i]);
	return res;
}
template <typename A>
string to_string(A v) {
	bool first = true;
	string res = "{";
	for(const auto &x : v) {
		if (!first) res += ", ";
		first = false;
		res += to_string(x);
	}
	res += "}";
	return res;
}
template <typename A, typename B>
string to_string(pair<A, B> p) { return "(" + to_string(p.first) + ", " + to_string(p.second) + ")"; }
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
	int n, k;
	cin >> n >> k;
	vector<pair<int, int>> vec;
	vector<int> values(n);
	iota(values.begin(), values.end(), 1);
	set<int> s(values.begin(), values.end());
	while(sz(s) >= k && sz(vec) < k) {
		cout << "? ";
		int cntr = 0;
		for(auto it = s.begin(); cntr < k; cntr++, it++) {
			cout << *it << ' ';
		}
		cout << endl;
		int ind, val;
		cin >> ind >> val;
		vec.emplace_back(val, ind);
		s.erase(ind);
	}
	sort(vec.begin(), vec.end());
	cout << "? ";
	for(int i = 0; i < sz(vec); ++i) {
		cout << vec[i].se << ' ';
	}
	int cntrr = sz(vec);
	for(auto it = s.begin(); cntrr < k; cntrr++, it++) {
		cout << *it << ' ';
	}
	cout << endl;

	int ind, val;
	cin >> ind >> val;

	int desc = k - sz(vec);
	for(int i = 0; i < sz(vec); ++i) {
		cerr << "DE: " << vec[i].fi << ' ' << vec[i].se << '\n';
	}
	debug(desc);
	for(int i = 0; i < sz(vec); ++i) {
		if(vec[i].fi == val) {
			cout << "! " << ceil((double)desc / 2) + i + 1 << '\n';
			break;
		}
	}
	return 0;
}