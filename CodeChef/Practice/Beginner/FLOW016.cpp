#include<bits/stdc++.h>
using namespace std;
#define LL long long int

int main() {
	LL t, a, b, gcdans;

	cin >> t;
	while(t--) {
		cin >> a >> b;
		gcdans = __gcd(a, b);
		cout << gcdans << " " << (a * b) / gcdans << endl;
	}
	return 0;
}