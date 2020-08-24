#include<bits/stdc++.h>
using namespace std;

#define forn(i, n) for(int i = 0; i < (n); i++)

int main() {
	int t, n, ans;

	cin >> t;
	while(t--) {
		ans = 0;
		cin >> n;
		while(n > 0) {
			ans += n % 10;
			n /= 10;
		}
		cout << ans << endl;
	}
	return 0;
}