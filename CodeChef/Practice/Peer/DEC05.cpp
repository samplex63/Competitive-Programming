#include<bits/stdc++.h>
using namespace std;

#define ULL unsigned long long int

int main() {
	int t, i;
	ULL n, val;

	cin >> t;
	while(t--) {
		i = 1;
		cin >> n;
		val = (ULL) log2(n);
		while(val--)
			i *= 2;
		cout << i << endl;
	}
	return 0;
}