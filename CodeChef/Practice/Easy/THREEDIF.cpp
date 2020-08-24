#include <bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "The value of \"" << #x << "\" is " << x << '\n'
typedef long long int LLI;

const LLI MOD = 1e9 + 7;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		vector<LLI> vec(3);
		for(auto &x: vec) {
			cin >> x;
		}

		sort(vec.begin(), vec.end());
		LLI ans = 1ll;

		for(auto x: vec) {
			ans *= (x % MOD);
			ans %= MOD;
		}

		ans = ans - (((vec[0] % MOD) * (vec[2] % MOD)) % MOD);
		if(ans < 0) {
			ans += MOD;
		}
		ans %= MOD;

		LLI value = (((vec[0] % MOD) * (vec[1] % MOD)) % MOD);
		value = (2 * value) % MOD;

		ans = ans - value;
		if(ans < 0) {
			ans += MOD;
		}
		ans %= MOD;

		value = (2 * (vec[0] % MOD)) % MOD;

		ans = (ans + value) % MOD;
		cout << ans << '\n';

	}
	return 0;
}