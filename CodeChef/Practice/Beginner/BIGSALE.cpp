#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unsigned int t, n;
	double price, quant, disc;

	cin >> t;
	while(t--) {
		cin >> n;
		double ans = 0;
		while(n--) {
			cin >> price >> quant >> disc;
			disc *= .01;
			disc *= disc;
			ans += price * disc * quant;
		}
		cout << fixed << setprecision(8) << ans << '\n';
	}
	return 0;
}