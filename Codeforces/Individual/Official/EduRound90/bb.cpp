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
		int ans = 0;
		for(int i = 0; i < sz(inp) - 1; ++i) {
			if(inp[i] != inp[i + 1]) {
				inp.erase(inp.begin() + i + 1);
				inp.erase(inp.begin() + i);
				i -= 2;
				cmx(i, -1);
				ans++;
			}
		}
		// cerr << ans << '\n';
		cout << ((ans & 1) ? "DA" : "NET") << '\n';
	}
	return 0;
}