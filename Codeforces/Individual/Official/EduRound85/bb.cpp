#include <bits/stdc++.h>
using namespace std;

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
		int n, x;
		cin >> n >> x;
		ll tot = 0;
		ll cnt = 0;
		vector<int> go;
		for(int i = 0; i < n; ++i) {
			int y;
			cin >> y;
			if(y >= x) {
				tot += y - x;
				cnt++;
			} else {
				go.push_back(y);
			}
		}
		sort(all(go));
		for(int i = sz(go) - 1; i >= 0; --i) {
			if(tot - x + go[i] >= 0) {
				cnt++;
				tot -= x - go[i];
			}
		}
		cout << cnt << '\n';
	}
	return 0;
}