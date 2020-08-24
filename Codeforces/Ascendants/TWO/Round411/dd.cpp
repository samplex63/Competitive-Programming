#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()

using ll = long long;
using ld = long double;
using vi = vector<int>;
using pii = pair<int, int>;

template<class T> bool cmn(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool cmx(T &a, T b) { return a < b ? (a = b, true) : false; }

const int mod = 1e9 + 7;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string inp;
	cin >> inp;
	int n = sz(inp);
	vi bc(n);
	bc[n - 1] = inp[n - 1] == 'b';

	for(int i = n - 2; i >= 0; --i) {
		bc[i] += bc[i + 1] + (inp[i] == 'b');
	}
	ll ans = 0;
	for(int i = n - 1; i >= 0; --i) {
		if(inp[i] == 'a') {
			ans = (ans + (bc[i] + ans) % mod) % mod;
		}
	}
	cout << ans << '\n';
	return 0;
}