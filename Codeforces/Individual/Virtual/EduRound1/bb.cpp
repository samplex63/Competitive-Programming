#include <bits/stdc++.h>
using namespace std;

#define first fi
#define second se
#define sz(x) (int) (x).size()

typedef long long ll;
typedef long double ld;

string to_string(string s) {
	return '"' + s + '"';
}

string to_string(const char* s) {
	return to_string((string) s);
}

string to_string(bool b) {
	return (b ? "true": "false");
}

template <typename A, typename B>
string to_string(pair<A, B> p) {
	return "(" + to_string(p.first) + ", " + to_string(p.second) + ")";
}

template <typename A>
string to_string(A v) {
	bool first = true;
	string res = "{";
	for (auto x: v) {
		if (!first) {
			res += ", ";
		}
		first = false;
		res += to_string(x);
	}
	res += "}";
	return res;
}

void debug_out() {
	cerr << endl;
}

template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T) {
	cerr << " " << to_string(H);
	debug_out(T...);
}

#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string inp;
	cin >> inp;
	int m;
	cin >> m;
	for(int mm = 0; mm < m; ++mm) {
		int l, r, k;
		cin >> l >> r >> k;
		l--;
		r--;
		string a = inp.substr(0, l), b = inp.substr(l, r - l + 1), c = inp.substr(r + 1);
		k %= sz(b);
		// debug(a, b, c);
		rotate(b.begin(), b.begin() + sz(b) - k, b.end());
		// debug(a, b, c, a + b + c);
		inp = a + b + c;
	}
	cout << inp << '\n';
	return 0;
}