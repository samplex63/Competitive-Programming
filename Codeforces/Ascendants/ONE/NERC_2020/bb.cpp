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

bool isPalin(string ok) {
	string rev = ok;
	reverse(rev.begin(), rev.end());
	return rev == ok;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string inp;
	cin >> inp;
	string ok = inp;
	ok.erase(unique(ok.begin(), ok.end()), ok.end());
	int ind = 1;
	if((sz(ok) & 1) && isPalin(ok)) {
		vector<int> vec(sz(ok));
		for(int i = 0; i < sz(ok); ++i) {
			int cnt = 1;
			while(inp[ind] == inp[ind - 1]) {
				cnt++;
				ind++;
			}
			ind++;
			vec[i] = cnt;
		}
		bool flag = true;
		if(vec[sz(ok) / 2] >= 2) {
			for(int i = 0; i < sz(ok) / 2; ++i) {
				if(vec[i] + vec[sz(ok) - i - 1] < 3) {
					flag = false;
					break;
				}
			}
		} else {
			flag = false;
		}
		if(flag) {
			cout << vec[sz(ok) / 2] + 1 << '\n';
		} else {
			cout << 0 << '\n';
		}
	} else {
		cout << 0 << '\n';
	}
	return 0;
}