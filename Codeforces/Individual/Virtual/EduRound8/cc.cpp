#include <bits/stdc++.h>
using namespace std;

#define sz(x) static_cast<int>((x).size())

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

template<class T> bool cmn(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool cmx(T &a, T b) { return a < b ? (a = b, true) : false; }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k;
	cin >> n >> k;
	string inp;
	cin >> inp;
	// inp = "abcdefghijklmnopqrstuvwxyz";
	// n = 26;
	int maxi = 0;
	for(int i = 0; i < n; ++i) {
		maxi += max(inp[i] - 'a', 'z' - inp[i]);
		// cerr << inp[i] << ' ' << max(inp[i] - 'a', 'z' - inp[i]) << '\n';
	}
	if(k > maxi) {
		cout << -1 << '\n';
		return 0;
	}
	string ans = inp;
	int i = 0;
	while(k > 0) {
		int max_pos_change = max(inp[i] - 'a', 'z' - inp[i]);
		int change = min(k, max_pos_change);
		k -= change;
		if(inp[i] >= 'n') change = -change;
		ans[i] += change;
		i++;
	}
	cout << ans << '\n';
	return 0;
}