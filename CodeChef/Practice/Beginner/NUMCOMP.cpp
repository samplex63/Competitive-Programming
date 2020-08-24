#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	unsigned int t;

	cin >> t;
	while(t--) {
		long long int a, b, n;
		cin >> a >> b >> n;
		if(n % 2 == 0) {
			a = abs(a);
			b = abs(b);
		}
		if(a > b)
			cout << "1\n";
		else if(a == b)
			cout << "0\n";
		else
			cout << "2\n";
	}
	return 0;
}