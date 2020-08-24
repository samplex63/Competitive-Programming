#include<bits/stdc++.h>
using namespace std;

int main() {
	unsigned int t, n;
	string arr[] = {"UUU", "LB", "MB", "UB", "LB", "MB", "UB", "SL", "SU"};

	cin >> t;
	while(t--) {
		cin >> n;
		unsigned int seat = (n % 8);
		unsigned int partner;
		if(seat == 0)
			partner = 7;
		else if(seat <= 3)
			partner = seat + 3;
		else if(seat <= 6)
			partner = seat - 3;
		else if(seat == 7)
			partner = 8;

		(n % 8 == 0)? seat = (8 * ((n - 1) / 8)) + partner: seat = (8 * (n / 8)) + partner;
		cout << seat << arr[partner] << endl;
	}
	return 0;
}