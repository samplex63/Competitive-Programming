#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())

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


typedef long long ll;
typedef long double ld;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifdef LOCAL
	freopen("in", "r", stdin);
	#endif
	int n, q;
	cin >> n >> q;
	vector<int> a(n), b(n), ok1(n, 1), ok2(n, 1);
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
		a[i] = a[i] % 2;
	}
	for(int i = 0; i < n; ++i) {
		cin >> b[i];
		b[i] = b[i] % 2;
	}
	for(int i = 1; i < n; ++i) {
		ok1[i] = ok1[i - 1];
		if(a[i - 1] != a[i]) ok1[i]++;
		ok2[i] = ok2[i - 1];
		if(b[i - 1] != b[i]) ok2[i]++;
	}
	for(int qq = 0; qq < q; ++qq) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		x1--;
		y1--;
		x2--;
		y2--;
		if(ok1[x1] == ok1[x2] && ok2[y1] == ok2[y2]) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}