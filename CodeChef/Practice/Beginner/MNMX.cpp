#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		unsigned int n;
		cin >> n;
		unsigned int arr[n], min = INT_MAX;
		for(auto x: arr) {
			cin >> x;
			if(min > x)
				min = x;
		}
		cout << min * (n - 1) << endl;
	}
	return 0;
}