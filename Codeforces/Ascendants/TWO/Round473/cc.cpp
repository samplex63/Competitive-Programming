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
	int n;
	cin >> n;
	if(n < 6) {
		cout << -1 << '\n';
	} else {
		int cnt = 2;
		for(int i = 0; i < n - 3; ++i) {
			cout << 1 << ' ' << (cnt++) << '\n';
		}
		cout << 2 << ' ' << n - 1 << '\n' << 2 << ' ' << n << '\n';
	}
	for(int i = 0; i < n - 1; ++i) {
		cout << 1 << ' ' << i + 2 << '\n';
	}
	return 0;
}