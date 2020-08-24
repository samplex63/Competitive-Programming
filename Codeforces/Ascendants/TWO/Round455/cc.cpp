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

const int maxn = 5001;
const int mod = 1e9 + 7;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	vector<vector<ll>> dp(maxn, vector<ll>(maxn, 1));
	for(int i = 1; i < maxn; ++i) {
		for(int j = 1; j < maxn; ++j) {
			dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % mod;
		}
	}
	int n;
	cin >> n;
	string inp;
	for(int i = 0; i < n; ++i) {
		char x;
		cin >> x;
		inp.push_back(x);
	}
	int tot = count(all(inp), 'f') + 1;
	string go(inp);
	go.erase(unique(all(go), [](auto a, auto b) { 
		if(a == 'f' && a == b) return true;
		return false;
	}), go.end());
	// cerr << "GO: " << go << '\n';
	int cp = 0;
	while(cp < n && inp[cp] == 's') cp++;
	if(cp == n) {
		cout << 1 << '\n';
		return 0;
	}
	int nugs = 0;
	for(int i = cp; i < sz(go); ++i) {
		if(go[i] == 'f') {
			i++;
		}
		nugs++;
	}
	nugs--;
	if(nugs == 0) {
		cout << 1 << '\n';
		return 0;
	}
	if(go[sz(go) - 2] == 'f') tot--;
	// cerr << "NUGS: " << nugs << '\n' << "TOT: " << tot << '\n';
	if(nugs == 1) {
		cout << tot << '\n';
	} else {
		nugs -= 2;
		ll ans = 0;
		for(int i = 0; i < tot; ++i) {
			ans = (ans + ((tot - i) * dp[nugs][i]) % mod) % mod;
		}
		cout << ans << '\n';
	}
	return 0;
}