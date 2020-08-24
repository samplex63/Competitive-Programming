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
	cin >> n;
	string a, b;
	cin >> a >> b;
	map<char, set<char>> mp;
	for(int i = 0; i < n; ++i) {
		if(a[i] > b[i]) swap(a[i], b[i]);
		mp[a[i]].insert(b[i]);
	}
	set<pair<char, char>> ans;
	for(auto x: mp) {
		char sm = *x.se.begin();
		ans.insert({x.fi, sm});
		for(auto it = next(x.se.begin()); it != x.se.end(); ++it) {
			mp[sm].insert(*it);
		}
	}
	cout << sz(ans) << '\n';
	for(auto x: ans) {
		cout << x.fi << ' ' << x.se << '\n';
	}
	return 0;
}