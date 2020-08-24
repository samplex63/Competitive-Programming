#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

template<class T> bool uin(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool uax(T &a, T b) { return a < b ? (a = b, true) : false; }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	string inp;
	cin >> n >> inp;
	vector<vector<int>> vec(4, vector<int>(3));
	for(int i = 0; i < n; ++i) {
		if(inp[i] == '0') {
			vec[3][1] = 1;
		} else {
			int val = inp[i] - '0';
			val--;
			vec[val / 3][val % 3] = 1;
		}
	}
	vec[3][0] = 2;
	vec[3][2] = 2;
	bool l, r, u, d;
	l = r = u = d = true;
	for(int i = 0; i < 4; ++i) {
		for(int j = 0; j < 3; ++j) {
			cerr << vec[i][j] << ' ';
		}
		cerr << '\n';
	}
	if(vec[3][1]) {
		d = l = r = false;
	}
	if(vec[0][0] || vec[0][1] || vec[0][2]) {
		u = false;
	}
	if(vec[0][0] || vec[1][0] || vec[2][0]) {
		l = false;
	}
	if(vec[0][2] || vec[1][2] || vec[2][2]) {
		r = false;
	}
	if(vec[2][0] || vec[2][2]) {
		d = false;
	}
	cerr << l << ' ' << r << ' ' << u << ' ' << d << '\n';
	cout << (l || r || u || d ? "NO\n" : "YES\n");
	return 0;
}