#include <bits/stdc++.h>
using namespace std;

typedef long long int LL;
typedef unsigned long long int ULL;

bool isPrime(LL n) {
	if(n == 2) {
		return true;
	}
	if(n % 2 == 0 || n == 1) {
		return false;
	}
	for(LL i = 3; i <= sqrt(n); i += 2) {
		if(n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unsigned int t;

	cin >> t;
	while(t--) {
		LL n, m;
		cin >> n >> m;
		for(LL i = n; i <= m; ++i) {
			if(isPrime(i)) {
				cout << i << '\n';
			}
		}
		cout << '\n';
	}
	return 0;
}