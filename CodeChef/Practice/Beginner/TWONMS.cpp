#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	long long n, a, b, mul;
	cin >> t;
	while(t--) {
		cin >> a >> b >> n;
		if(n % 2 == 1) {
			cout << max(((2 * a) / b), b / (2 * a)) << '\n';
		} else {
			cout << max(a / b, b / a) << '\n';
		}
	}
	return 0;
}