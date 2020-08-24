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
		int n, k;
		cin >> n >> k;
		string inp;
		cin >> inp;
		vector<int> one_p;
		for(int i = 0; i < n; ++i) {
			if(inp[i] == '1') one_p.push_back(i);
		}
		// one_p.push_back(n);
		int ans = 0;
		if(one_p.empty()) {
			if(n <= k + 1) {
				cout << 1 << '\n';
				continue;
			}
			one_p = {0, n - 1};
			ans += 2;
		}
		ans += one_p[0] / (k + 1);
		ans += (n - 1 - one_p.back()) / (k + 1);
		for(int i = 1; i < sz(one_p); ++i) {
			int dif = one_p[i] - one_p[i - 1] - 1;
			dif -= 2 * k + 1;
			if(!cmx(dif, 0)) {
				ans++;
			}
			ans += dif / (k + 1);
		}
		cout << ans << '\n';
	}
	return 0;
}