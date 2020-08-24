#include<bits/stdc++.h>
using namespace std;

int main() {
	unsigned int t, n;

	cin >> t;
	while(t--) {
		bool flag = true;
		cin >> n;
		int arr[n];
		for(auto &x: arr)
			cin >> x;
		if(n % 2 == 0)
			flag = false;
		if(flag) {
			if(arr[0] != 1 || arr[n - 1] != 1)
				flag = false;
			if(flag) {
				adjacent_difference(arr, arr + n, arr);

				for(int i = 0; i < n; ++i) {
					if(i < ((n + 1) / 2)) {
						if(arr[i] != 1) {
							flag = false;
							break;
						}
					}
					else {
						if(arr[i] != -1) {
							flag = false;
							break;
						}
					}
				}
			}
		}

		flag? cout << "yes\n": cout << "no\n";
	}
	return 0;
}