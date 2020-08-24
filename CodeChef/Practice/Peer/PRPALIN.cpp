#include<bits/stdc++.h>
using namespace std;

#define ULL unsigned long long int

bool isPrime(LL n) {
	if(n == 2) {
		return true;
	}
	if(n == 1 || n % 2 == 0) {
		return false;
	}
	for(LL i = 3; i *i <= n; i += 2) {
		if(n % i == 0) {
			return false;
		}
	}
	return true;
}

bool isPal(ULL n) {
	string s = to_string(n);
	string a = s;
	reverse(s.begin(), s.end());
	return a == s;
}

int main() {
	ULL n, ans, i;
	cin >> n;
	if(n % 2 == 0) {
		n++;
	}
	for(i = n; ; i += 2) {
		if(isPrime(i) && isPal(i)) {
			break;
		}
	}
	cout << i << endl;
	return 0;
}