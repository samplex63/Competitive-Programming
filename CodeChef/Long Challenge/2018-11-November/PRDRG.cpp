#include<bits/stdc++.h>
using namespace std;

#define ULL unsigned long long int

void foo(long double input, ULL& x, ULL& y) {
	ULL integral = floor(input);
	long double frac = input - integral;
	const ULL precision = 10000000000000000000000000;
	ULL multi = frac * precision;
	ULL gcd_ = __gcd(multi, precision);

	y = precision / gcd_;
	x = multi / gcd_;
	integral *= y;
	x += integral;
	return;
}

int main() {
	unsigned int t, n, i;
	ULL x, y;
	long double ans;

	cin >> t;
	while(t--) {
		ans = 0.0;
		cin >> n;
		for(i = 1; i <= n; ++i)
			if(i % 2)
				ans += (1 / pow(2, i));
			else
				ans -= (1 / pow(2, i));
		foo(ans, x, y);
		cout << x << " " << y << " ";
	}
	return 0;
}