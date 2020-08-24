#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

template<class T> bool uin(T& a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool uax(T& a, T b) { return a < b ? (a = b, true) : false; }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--) {
		int r, b, g, w;
		cin >> r >> b >> g >> w;
		vector<int> col{r, b, g, w};
		int cnt = 0;
		bool flag = false;
		for(int i = 0; i < 4; ++i) {
			cnt += (col[i] & 1);
		}
		if(cnt > 1) {
			if(r > 0 && b > 0 && g > 0) {
				col[0]--;
				col[1]--;
				col[2]--;
				col[3]++;
				cnt = 0;
				for(int i = 0; i < 4; ++i) {
					cnt += (col[i] & 1);
				}
				if(cnt <= 1) flag = true;
			}
		} else {
			flag = true;
		}
		cout << (flag ? "Yes" : "No") << '\n';
	}
	return 0;
}