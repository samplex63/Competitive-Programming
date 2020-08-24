#include <bits/stdc++.h>
using namespace std;

#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()

using ll = long long;
using ld = long double;

template<class T> bool cmn(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool cmx(T &a, T b) { return a < b ? (a = b, true) : false; }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		if(n < 4) {
			cout << -1 << '\n';
			continue;
		}
		for(int i = n - !(n & 1); i > 0; i -= 2) {
			cout << i << ' ';
		}
		cout << "4 2 ";
		for(int i = 6; i <= n; i += 2) {
			cout << i << ' ';
		}
		cout << '\n';
	}
	return 0;
}