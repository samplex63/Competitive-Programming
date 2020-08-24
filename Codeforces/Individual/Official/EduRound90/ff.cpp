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
	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		vector<int> req(n), has(n);
		for(int& x: req) cin >> x;
		for(int& x: has) cin >> x;
		vector<int> ohas(has);
		for(int i = 0; i < n; ++i) {
			if(has[i] > req[i]) {
				int next = (i + 1) % n;
				has[next] += min(ohas[i], has[i] - req[i]);
			}
		}
		debug(req, has);
		bool flag = true;
		int ind = -1;
		for(int i = 0; i < n; ++i) {
			if(req[i] > has[i]) {
				ind = i;
				break;
			}
		}
		if(ind == -1) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
		continue;
		int curp = ind;
		while(curp != (ind + 1) % n) {
			int prev = (curp - 1 + n) % n;
			int valreq = req[curp] - has[curp];
			int can_give = has[prev] - req[prev];
			if(can_give + has[curp] < req[prev]) {
				flag = false;
				break;
			} else {
				has[prev] -= max(valreq, 0);
			}
			// cerr << curp << ' ' << has[prev] << '\n';
			curp = prev;
		}
		cout << (flag ? "YES" : "NO") << '\n';
	}
	return 0;
}