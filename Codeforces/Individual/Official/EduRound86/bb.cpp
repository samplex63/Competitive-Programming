#include <bits/stdc++.h>
using namespace std;

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
		string ans(2 * sz(inp), '0');
		for(int i = 1; i < sz(ans); i += 2) {
			ans[i] = '1';
		}
		if(count(all(inp), '1') == sz(inp) || count(all(inp), '0') == sz(inp)) {
			cout << inp << '\n';
		} else {
			cout << ans << '\n';
		}
	}
	return 0;
}