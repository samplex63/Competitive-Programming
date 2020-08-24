#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())

typedef long long ll;
typedef long double ld;

string to_string(const string& s) { return '\"' + s + '\"'; }
string to_string(const char* s) { return to_string((string) s); }
string to_string(bool b) { return (b ? "true" : "false"); }
string to_string(const vector<bool>& v) {
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
string to_string(const bitset<N>& v) {
	string res = "";
	for(size_t i = 0; i < N; i++) res += static_cast<char>('0' + v[i]);
	return res;
}
template <typename A>
string to_string(const A& v) {
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
string to_string(const pair<A, B>& p) { return "(" + to_string(p.first) + ", " + to_string(p.second) + ")"; }
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

	#ifdef LOCAL
	freopen("in", "r", stdin);
	#endif
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		string inp;
		cin >> inp;
		vector<int> vec(n + 1);
		vector<pair<int, int>> ans;
		vec[0] = 0;
		for(int i = 1; i < n + 1; ++i) {
			vec[i] = vec[i - 1] + (inp[i - 1] == '(' ? 1 : -1);
		}
		debug(1, vec);
		int lr = 1;
		for(int i = 1; i < n + 1; ++i) {
			if(vec[i] == -1) {
				lr = i;
				for(int j = i + 1; j < n + 1; ++j) {
					if(vec[j] == 0) {
						ans.emplace_back(lr, j);
						i = j - 1;
						break;
					}
				}
			}
		}
		for(int i = 0; i < n + 1; ++i) {
			if(vec[i] < 0) {
				vec[i] = -vec[i];
			}
		}
		int maxi = *max_element(vec.begin(), vec.end());
	}
	return 0;
}