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
	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		vector<int> vec(3 * n + 1);
		for(int i = 0; i < n; ++i) {
			int x;
			cin >> x;
			vec[x]++;
		}
		int ans = 0;
		for(int i = 2; i <= 2 * n; ++i) {
			int num = 0;
			for(int j = 1; j <= i / 2; ++j) {
				if(2 * j == i) {
					num += vec[j] / 2;
				} else {
					num += min(vec[j], vec[i - j]);
				}
			}
			uax(ans, num);
		}
		cout << ans << '\n';
	}
	return 0;
}