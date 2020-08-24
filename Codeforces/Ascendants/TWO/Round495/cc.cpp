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
	int n;
	cin >> n;
	vector<int> vec(n);
	for(int& x: vec) cin >> x;
	set<int> taken;
	map<int, int> mp;
	for(int i = 0; i < n; ++i) {
		mp[vec[i]]++;
	}
	int ans = 0;
	for(int i = 0; i < n; ++i) {
		mp[vec[i]]--;
		if(mp[vec[i]] == 0) mp.erase(vec[i]);
		if(!taken.insert(vec[i]).se) continue;
		ans += sz(mp);
	}
	cout << ans << '\n';
	return 0;
}