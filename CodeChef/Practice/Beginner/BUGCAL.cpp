#include <bits/stdc++.h>
using namespace std;

int main() {
	unsigned int t;

	cin >> t;
	while(t--) {
		long long a, b;
		bool flag = false;	

		cin >> a >> b;
		
		int n = log10(max(a, b)) + 1;
		long long c[n];
		
		for(int i = 0; i < n; ++i) {
			c[i] = ((a % 10) + (b % 10)) % 10;
			a /= 10;
			b /= 10;
		}
		
		for(int i = n - 1; i >= 0; --i) {
			if(c[i] != 0 || flag) {
				cout << c[i];
				flag = true;
			}
		}
		
		if(!flag)
			cout << "0";
		cout << endl;	
	}
	return 0;
}