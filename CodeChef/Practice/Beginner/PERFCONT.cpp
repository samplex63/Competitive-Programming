#include<bits/stdc++.h>
using namespace std;

int main() {
	unsigned int t, n;
	unsigned long int p;

	cin >> t;
	while(t--) {
		cin >> n >> p;
		unsigned int hard = 0, cwalk = 0;
		unsigned long int arr[n];
		for(auto  &x: arr) {
			cin >> x;
			if(x <= (p / 10))
				hard++;
			else if(x >= (p / 2))
				cwalk++;
		}
		(hard == 2 && cwalk == 1)? cout << "yes\n": cout << "no\n";
	}
	return 0;
}