#include<bits/stdc++.h>
using namespace std;

#define ULL unsigned long long int

int main() {
	int t;
	ULL n;
	cin >> t;
	while(t--) {
		cin >> n;
		if(n % 2)
			cout << "BOB" << endl;
		else
			cout << "ALICE" << endl;
	}
	return 0;
}