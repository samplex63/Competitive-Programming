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
		int fi = 2;
		bool flag = false;
		for(int i = 2; i * i <= n; ++i) {
			if(n % i == 0) {
				fi = i;
				flag = true;
				break;
			}
		}
		if(!flag) {
			cout << 1 << ' ' << n - 1 << '\n';
		} else cout << n / fi << ' ' << (n - n / fi) << '\n';
	}
	return 0;
}