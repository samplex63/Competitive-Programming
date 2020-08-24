#include <bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "The value of \"" << #x << "\" is " << x << '\n'
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif

	int tt;
	cin >> tt;
	while(tt--) {
		ll n;
		cin >> n;
		bitset<5> b, checker;
		checker.set();

		unordered_map<bitset<5>, ll> um;
		for(ll i = 0; i < n; ++i) {
			string s;
			cin >> s;
			b.reset();
			for(auto x: s) {
				if(x == 'a') b[0] = 1;
				else if(x == 'e') b[1] = 1;
				else if(x == 'i') b[2] = 1;
				else if(x == 'o') b[3] = 1;
				else if(x == 'u') b[4] = 1;
			}
			um[b]++;
		}
		ll ans = 0;
		for(auto x: um) {
			for(auto y: um) {
				if(x.first == y.first) {
					continue;
				}
				if((x.first | y.first) == checker) {
					ans += (x.second * y.second);
				}
			}
		}
		ans += um[checker] * (um[checker] - 1ll);
		ans /= 2ll;
		cout << ans << '\n';
	}
	return 0;
}