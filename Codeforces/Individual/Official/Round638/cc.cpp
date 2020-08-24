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
		int n, k;
		cin >> n >> k;
		string inp;
		cin >> inp;
		sort(all(inp));
		if(inp[0] == inp.back()) {
			cout << inp.substr(0, (n + k - 1) / k) << '\n';
			continue;
		}
		string ans(1, inp[k - 1]);
		if(inp[0] == inp[k - 1]) {
			if(inp[k] == inp.back()) {
				ans += string((n - 1) / k, inp[k]);
			} else {
				ans += inp.substr(k);
			}
		}
		cout << ans << '\n';
	}
	return 0;
}