#include<bits/stdc++.h>
using namespace std;

int main() {
	unsigned int t, n;
	unsigned long long int k, sleft, sright, diff;
	cin >> t;

	while(t--) {
		cin >> n >> k;
		int arr[n];
		for(auto &x: arr)
			cin >> x;
		unsigned int ans = 1;
		diff = ULLONG_MAX;
		for(unsigned int i = 1; i < n; ++i) {
			sleft = 0;
			sright = 0;
			for(unsigned int j = 0; j < i; ++j)
				sleft += arr[j];
			for(unsigned int j = i; j < n; ++j)
				sright += arr[j];
			if((abs(sright - sleft)) < diff) {
				ans = i;
				diff = (abs(sright - sleft));
			}
			if(diff == 0)
				break;
		}
		cout << ans + 1 << endl;
	}
	return 0;
}