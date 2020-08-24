#include <bits/stdc++.h>
using namespace std;

#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()

using ll = long long;
using ld = long double;

template<class T> bool cmn(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool cmx(T &a, T b) { return a < b ? (a = b, true) : false; }

bitset<8000 * 8000 + 4> bs;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--) {
		bs.reset();

		int n;
		cin >> n;
		vector<int> go(n);
		for(int& x: go) cin >> x;
		for(int i = 1; i < n; ++i) {
			go[i] += go[i - 1];
		}
		go.insert(go.begin(), 0);
		for(int i = 1; i <= n; ++i) {
			for(int j = i + 1; j < n + 1; ++j) {
				bs[go[j] - go[i - 1]] = true;
			}
		}
		int ans = 0;
		for(int i = 1; i <= n; ++i) {
			if(bs[go[i] - go[i - 1]]) {
				ans++;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}