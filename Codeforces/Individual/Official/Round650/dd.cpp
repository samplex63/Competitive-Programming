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
	int tt;
	cin >> tt;
	while(tt--) {
		string inp;
		cin >> inp;
		vector<int> mp(26);
		for(int i = 0; i < sz(inp); ++i) mp[inp[i] - 'a']++;
		int n;
		cin >> n;
		vector<int> vec(n);
		for(int& x: vec) cin >> x;
		set<int> done;
		auto canMake = [&](int i) {
			if(done.count(i)) return false;
			int ret = 0;
			for(int x: done) {
				ret += abs(x - i);
			}
			return ret == vec[i];
		};
		string ans(n, '?');
		int last = 25;
		while(count(all(ans), '?') > 0) {
			vector<int> sub;
			for(int i = 0; i < n; ++i) {
				if(canMake(i)) {
					sub.push_back(i);
				}
			}
			for(int i = last; i >= 0; --i) {
				if(mp[i] >= sz(sub)) {
					last = i - 1;
					for(int x: sub) {
						ans[x] = char(i + 'a');
					}
					break;
				}
			}
			done.insert(all(sub));
		}
		cout << ans << '\n';
	}
	return 0;
}