#include <bits/stdc++.h>
using namespace std;

typedef long long int LL;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unsigned int t;
	cin >> t;
	while(t--) {
		LL l, r;
		cin >> l >> r;
		if(l % 2 == 0) {
			l++;
		}
		if(r % 2 == 0) {
			r--;
		}
		LL oddnums = (r - l) / 2 + 1;
		if(oddnums % 2 == 0) {
			cout << "Even\n";
		}
		else {
			cout << "Odd\n";
		}
	}
	return 0;
}