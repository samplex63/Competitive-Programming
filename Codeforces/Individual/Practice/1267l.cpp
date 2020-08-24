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
	int n, l, k;
	string inp;
	cin >> n >> l >> k >> inp;
	sort(inp.begin(), inp.end());
	int eqind = k - 1;
	while(eqind >= 0 && inp[eqind] == inp[k - 1]) {
		eqind--;
	}
	int cur = 0;
	vector<string> vec(n);
	for(int i = 0; i < n; ++i) {
		if(i > eqind && i < k) {
			int sub = i;
			while(sz(vec[k - 1]) < l) {
				while(sub >= 0 && vec[k - 1].back() == vec[sub].back()) {
					sub--;
				}
				while(sub < k) {
					vec[++sub].push_back(inp[cur++]);
				}
			}
			i = k - 1;
		} else {
			vec[i].push_back(inp[cur++]);
		}
	}
	for(int i = 0; i < n; ++i) {
		while(sz(vec[i]) < l) {
			vec[i].push_back(inp[cur++]);
		}
	}
	for(auto x: vec) cout << x << '\n';
	return 0;
}