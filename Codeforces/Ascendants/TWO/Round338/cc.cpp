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
	string t, m;
	cin >> t >> m;
	vector<vector<int>> vec(26);
	for(int i = 0; i < sz(t); ++i) {
		vec[t[i] - 'a'].push_back(i);
	}
	
	for(int i = 0; i < sz(m); ++i) {
		int val = m[i] - 'a';
		for(int j = 0; j < sz(vec[val]); ++j) {
			make(i, val, j);
		}
	}
	return 0;
}