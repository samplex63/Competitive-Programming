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
		int n, a, b;
		cin >> n >> a >> b;
		if(a > b) swap(a, b);

		int wurst = b + min((a - 1), (n - b)), best = 1;
		int sum = a + b;
		if(sum > n) {
			best = min(n, sum - n + 1);
		}
		cout << best << ' ' << wurst << '\n';
	}
	return 0;
}