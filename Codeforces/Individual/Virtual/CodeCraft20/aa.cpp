#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
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
		ll val, k;
		cin >> k >> val;
		ll sum = 0;
		for(int i = 1; i < n; ++i) {
			ll x;
			cin >> x;
			sum += x;
		}
		cout << min(k, val + sum) << '\n';
	}
	return 0;
}