#include<bits/stdc++.h>
using namespace std;

#define UI unsigned int

UI reverse(UI n) {
	UI rev = 0;
	while(n > 0) {
		rev += n % 10;
		rev *= 10;
		n /= 10;
	}
	return rev / 10;
}

int main() {
	UI t, n;

	cin >> t;
	while(t--) {
		cin >> n;
		cout << reverse(n) << endl;
	}
	return 0;
}