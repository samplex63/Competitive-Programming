#include <bits/stdc++.h>
using namespace std;

#define DEBUG(x) cerr << "[" << (#x) << "] = " << (x) << '\n'
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		ll n, m;
		cin >> n >> m;
		bool flag = false;
		if(n > m) {
			swap(n, m);
		}
		ll ari_min = numeric_limits<ll>::max();
		ll rich_min = ari_min, cnt = 0;
		while(n > 0) {
			cnt++;
			flag = !flag;
			swap(n, m);
			ll mult = n / m;
			n %= m;
			if(mult > 1) {
				flag? ari_min = min(ari_min, cnt): rich_min = min(rich_min, cnt);
			}
		}
		if(rich_min != ari_min) {
			flag = ari_min < rich_min;
		}
		cout << (flag? "Ari\n": "Rich\n");
	}
	return 0;
}