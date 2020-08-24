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
	int n;
	cin >> n;
	vector<ll> vec(n);
	ll sum = 0;
	for(int i = 0; i < n; ++i) {
		cin >> vec[i];
		sum += vec[i];
	}
	sort(vec.begin(), vec.end());
	ll le = sum % n;
	ll diff = ceil((ld) sum / n), diff2 = sum / n;
	ll num1 = 0, num2 = 0;
	for(int i = 0; i < n; ++i) {
		if(vec[i] >= diff2) break;
		num1 += diff2 - vec[i];
	}
	for(int i = 0; i < n; ++i) {
		if(vec[i] <= diff) continue;
		num2 += vec[i] - diff;
	}
	cout << max(num1, num2) << '\n';
	return 0;
}