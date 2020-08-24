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

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<string> vec(n);
	for(int i = 0; i < n; ++i) cin >> vec[i];
	if(n == 1) {
		cout << 0 << '\n';
		return 0;
	}
	int ans = INT_MAX;
	for(int i = 0; i < n; ++i) {
		vector<int> req;
		for(int j = 0; j < n; ++j) {
			if(i == j) continue;
			string cpy = vec[j];
			int cnt = 0;
			while(cnt < sz(vec[j]) && vec[i] != cpy) {
				cpy = cpy.substr(1) + cpy[0];
				cnt++;
			}
			req.push_back(cnt);
		}
		int mxi = *max_element(all(req));
		if(mxi == sz(vec[i])) {
			ans = -1;
			break;
		}
		// for(int j = 0; j < sz(req); ++j) {
		// 	cerr << req[j] << ' ';
		// }
		// cerr << '\n';
		int tot = accumulate(all(req), 0);
		cmn(ans, tot);
	}
	cout << ans << '\n';
	return 0;
}