#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

template<class T> bool uin(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool uax(T &a, T b) { return a < b ? (a = b, true) : false; }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int k;
	string inp;
	cin >> k >> inp;
	sort(all(inp));
	ll sum = 0;
	for(int i = 0; i < sz(inp); ++i) {
		sum += inp[i] - '0';
	}
	ll ans = 0;
	int cp = 0;
	while(sum < k) {
		sum += 9 - (inp[cp++] - '0');
		ans++;
	}
	cout << ans << '\n';
	return 0;
}