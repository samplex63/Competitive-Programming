#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())

typedef long long ll;
typedef long double ld;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	cin >> m >> n;
	if(n == 1 && m == 1) {
		cout << 0;
		return 0;
	}
	if(n == 1) {
		for(int i = 1; i <= m; ++i) {
			cout << i + 1 << '\n';
		}
		return 0;
	}
	for(int i = 0; i < n; ++i) {
		cout << i + 2 << ' ';
	}
	cout << '\n';
	for(int i = 1; i < m; ++i) {
		for(int j = 0; j < n; ++j) {
			cout << (j + 2) * (n + i + 1) << ' ';
		}
		cout << '\n';
	}
	return 0;
}