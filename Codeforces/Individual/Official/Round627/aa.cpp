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
		int n;
		cin >> n;
		bool all_odd = true, all_even = true;
		for(int i = 0; i < n; ++i) {
			int x;
			cin >> x;
			int val = x & 1;
			all_odd &= val;
			all_even &= !val;
		}
		cout << ((all_odd || all_even) ? "YES" : "NO") << '\n';
	}
	return 0;
}