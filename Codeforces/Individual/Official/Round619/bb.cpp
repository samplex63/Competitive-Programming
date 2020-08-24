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
	for(int i = 0; i < static_cast<int>(v.size()); i++) {
		if(!first) {
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
	for(size_t i = 0; i < N; i++) {
		res += static_cast<char>('0' + v[i]);
	}
	return res;
}
template <typename A>
string to_string(A v) {
	bool first = true;
	string res = "{";
	for(const auto &x : v) {
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
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)

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
		if(count(vec.begin(), vec.end(), -1) == n) {
			cout << "0 0\n";
			continue;
		}
		int cn = 0;
		while(vec[cn] == -1) {
			cn++;
		}
		int ans = vec[cn];
		for(int i = 0; i < cn; ++i) {
			vec[i] = vec[cn];
		}
		// debug(vec);
		int md = abs(vec[1] - vec[0]);

		if(vec[0] == -1 || vec[1] == -1) md = 0;
		
		for(int i = 1; i < sz(vec); ++i) {
			int val = abs(vec[i - 1] - vec[i]);
			if(vec[i - 1] == -1) val = abs(ans - vec[i]);
			if(vec[i] == -1) val = abs(ans - vec[i - 1]);
			if(vec[i] == -1 && vec[i - 1] == -1) val = 0;
			if(val > md) {
				if(vec[i - 1] == -1) {
					ans = (ans + vec[i]) / 2;
					val = abs(ans - vec[i]);
				} else if(vec[i] == -1) {
					ans = (vec[i - 1] + ans) / 2;
					val = abs(ans - vec[i - 1]);
				}
			}
			md = max(md, val);
		}
		cout << md << ' ' << ans << '\n';
	}
	return 0;
}