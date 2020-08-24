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

set<pair<int, int>> ha;
string inp;
int n;
set<string> st;

void rec(int pos, int si) {
	if(ha.count({pos, si})) return;
	ha.insert({pos, si});
	string nex = inp.substr(pos, si);
	st.insert(nex);
	int b2 = pos - 2, b3 = pos - 3;
	if(si == 2) {
		if(b3 >= 0) rec(b3, 3);
		if(b2 >= 0) {
			string prev = inp.substr(b2, 2);
			if(nex != prev) {
				rec(b2, 2);
			}
		}
	} else {
		if(b2 >= 0) rec(b2, 2);
		if(b3 >= 0) {
			string prev = inp.substr(b3, 3);
			if(nex != prev) {
				rec(b3, 3);
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> inp;
	inp = inp.substr(5);
	n = sz(inp);
	int b2 = n - 2;
	int b3 = n - 3;
	if(b2 >= 0) {
		st.insert(inp.substr(b2));
		rec(b2, 2);
	}
	if(b3 >= 0) {
		st.insert(inp.substr(b3));
		rec(b3, 3);
	}
	cout << sz(st) << '\n';
	for(auto x: st) cout << x << '\n';
	return 0;
}