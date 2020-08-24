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
	string inp;
	cin >> inp;
	int n = sz(inp);
	int ans = 0;
	for(int i = 0; i < n - 1; ++i) {
		if(inp[i] == 'Q') {
			for(int j = i + 1; j < n; ++j) {
				if(inp[j] == 'Q') {
					for(int k = i + 1; k < j; ++k) {
						if(inp[k] == 'A') {
							ans++;
						}
					}
				}
			}
		}
	}
	cout << ans << '\n';
	return 0;
}