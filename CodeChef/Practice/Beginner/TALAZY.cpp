#include<bits/stdc++.h>
using namespace std;

int main() {
	unsigned int t;
	unsigned long long int n, b, m, ans;

	cin >> t;
	while(t--) {
		ans = 0;
		cin >> n >> b >> m;
		while(n > 0) {
			if(n % 2 == 0) {
				ans += (m * n / 2);
				m *= 2;
				n /= 2;
			}
			else {
				ans += (m * ((n + 1) / 2));
				m *= 2;
				n /= 2;
			}
			ans += b;
		}
		cout << ans - b << endl;
	}
	return 0;
}