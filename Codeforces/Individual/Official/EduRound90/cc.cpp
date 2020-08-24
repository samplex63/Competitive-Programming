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
		int n = sz(inp);
		set<int> vis;
		int cur = 0;
		ll ans = 0;
		for(int i = 0; i < n; ++i) {
			cur += inp[i] == '-' ? -1 : 1;
			if(cur < 0) {
				if(!vis.count(cur)) {
					vis.insert(cur);
					ans += i + 1;
				}
			}
		}
		cout << ans + n << '\n';
	}
	return 0;
}