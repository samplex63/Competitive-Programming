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
	vector<int> vec(n);
	for(int& x: vec) cin >> x;
	vector<pii> rqo, ini(m);
	for(int i = 0; i < m; ++i) {
		cin >> ini[i].fi >> ini[i].se;
		ini[i].se--;
	}
	int cur_max = -1;
	for(int i = m - 1; i >= 0; --i) {
		if(cmx(cur_max, ini[i].se)) {
			rqo.push_back(ini[i]);
		}
	}
	reverse(all(rqo));
	sort(vec.begin(), vec.begin() + rqo[0].se + 1);
	vector<int> ans(vec);
	int lp = 0, rp = rqo[0].se;
	for(int i = 1; i < sz(rqo); ++i) {
		int cur_l = rqo[i].se;
		int cur_r = rqo[i - 1].se;
		for(int j = cur_r; j > cur_l; --j) {
			ans[j] = (rqo[i - 1].fi == 2 ? vec[lp++]: vec[rp--]);
		}
	}
	int tb = rqo.back().fi, ran = rqo.back().se;
	for(int i = 0; i <= ran; ++i) {
		ans[i] = (tb == 1 ? vec[lp++] : vec[rp--]);
	}
	for(int i = 0; i < n; ++i) {
		cout << ans[i] << ' ';
	}
	cout << '\n';
	return 0;
}