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
	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		vector<ll> vec(n);
		ll xor_val = 0, sum = 0;
		for(int i = 0; i < n; ++i) {
			cin >> vec[i];
			xor_val ^= vec[i];
			sum += vec[i];
		}
		ll ans1 = xor_val, ans2 = sum + xor_val;
		cout << "2\n" << ans1 << ' ' << ans2 << '\n';
	}
	return 0;
}