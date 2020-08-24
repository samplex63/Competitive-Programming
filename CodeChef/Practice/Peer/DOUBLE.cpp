#include<bits/stdc++.h>
using namespace std;

#define ULL unsigned long long int

int main() {
	int t;
	ULL in;
	cin >> t;
	while(t--) {
		cin >> in;
		cout << ((in % 2 == 0)? in: in - 1) << endl;
	}
	return 0;
}