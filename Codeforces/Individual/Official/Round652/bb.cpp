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
		int n;
		cin >> n;
		string inp;
		cin >> inp;
		string ans = "";
		int curp = 0;
		while(curp < n && inp[curp] == '0') {
			curp++;
			ans += '0';
		}
		// while(curp < n) {
		// 	while(curp < n && inp[curp] == '1') {
		// 		curp++;
		// 	}
		// 	while(curp < n && inp[curp] == '0') {
		// 		curp++;
		// 	}
		// 	ans += '0';
		// }
		for(int i = n - 1; i >= 0; --i) {
			if(inp[i] == '0') {
				if(sz(ans) + n - 1 - i < n) {
					ans += '0';
				}
				ans += string(n - 1 - i, '1');
				break;
			}
		}
		if(ans.empty()) ans = string(n, '1');
		cout << ans << '\n';
	}
	return 0;
}