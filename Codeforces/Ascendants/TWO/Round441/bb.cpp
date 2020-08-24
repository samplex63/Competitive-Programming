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

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, k;
	cin >> n >> k >> m;
	map<int, int> mp;
	map<int, vector<int>> acm;
	for(int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		acm[x % m].push_back(x);
		mp[x % m]++;
	}
	int ans = 0;
	int dit = 0;
	for(auto& x: mp) {
		if(cmx(ans, x.se)) {
			dit = x.fi;
		}
	}
	if(ans >= k) {
		cout << "Yes\n";
		for(int i = 0; i < k; ++i) {
			cout << acm[dit][i] << ' ';
		}
	} else {
		cout << "No\n";
	}
	return 0;
}