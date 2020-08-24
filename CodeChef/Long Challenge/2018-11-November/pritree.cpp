#include<bits/stdc++.h>
using namespace std;

bool isPrime(unsigned int n) {
	if(n % 2 == 0)
		return false;
    for (unsigned int i = 3; i <= sqrt(n); i += 2)
        if (n % i == 0)
            return false;
    return true;
}

int main() {
	unsigned int n, arr[1000], check;
	cin >> n;
	for(int i = 1; i <= n; ++i) {
		cin >> arr[i];
		for(int j = i - 1; j > 0; --j) {
			check = arr[i] + arr[j];
			if(isPrime(check))
				cout << i << " " << j << endl;
		}
	}
	return 0;
}