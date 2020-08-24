#include <bits/stdc++.h>
using namespace std;

#define sz(x) static_cast<int>((x).size())

using ll = long long;
using ld = long double;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--) {
		int n, m;
		cin >> n >> m;
		cout << (n % m == 0 ? "YES" : "NO") << '\n';
	}
	return 0;
}