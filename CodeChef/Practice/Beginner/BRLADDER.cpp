#include<bits/stdc++.h>
using namespace std;

int main() {
	unsigned int t;
	unsigned long long int n, m;
	cin >> t;
	while(t--) {
		bool flag = false;
		cin >> n >> m;
		if(n == (m + 2) || n == (m - 2)) {
			flag = true;
		}
		else if(n % 2) {
			if(n == (m - 1)) {
				flag = true;
			}
		}
		else if(n % 2 == 0) {
			if(n == (m + 1))
				flag = true;
		}
		flag? cout << "YES\n": cout << "NO\n";
	}
	return 0;
}