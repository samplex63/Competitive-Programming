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
	int n, m;
	cin >> n >> m;
	m += 2;
	vector<string> vec(n);
	for(int i = 0; i < n; ++i) {
		cin >> vec[i];
	}
	vector<pii> go(n);
	for(int i = 0; i < n; ++i) {
		int l = -1, r = -1;
		for(int j = 0; j < sz(vec[i]); ++j) {
			if(vec[i][j] == '1') {
				if(l == -1) l = j;
				r = j;
			}
		}
		go[i] = {l, r};
	}
	reverse(all(go));
	while(n >= 0 && go[n - 1].fi == -1) n--;
	int ans = INT_MAX;
	for(int des = 0; des < (1 << (n - 1)); ++des) {
		int val = des << 1;
		bitset<16> bs(val);
		int chans = 0;
		for(int i = 1; i < n; ++i) {
			if(bs[i - 1] && bs[i]) {
				if(go[i - 1].fi == -1) {
					chans++;
				} else {
					chans += 2 * (m - go[i - 1].fi - 1) + 1;
				}
			} else if((bs[i - 1] && !bs[i]) || (!bs[i - 1] && bs[i])) {
				chans += m;
			} else {
				if(go[i - 1].se == -1) {
					chans++;
				} else {
					chans += 2 * go[i - 1].se + 1;
				}
			}
		}
		chans += bs[n - 1] ? (m - go[n - 1].fi - 1) : go[n - 1].se;
		cmn(ans, chans);
	}
	cout << (ans == INT_MAX ? 0 : ans) << '\n';
	return 0;
}