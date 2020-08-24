#include<iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unsigned int t;
	cin >> t;
	long int n, u, d;
	while(t--) {
		cin >> n >> u >> d;
		long int arr[n], i;
		for(auto &x: arr)
			cin >> x;
		bool parachute = true;
		for(i = 1; i < n; ++i) {
			if(arr[i] > arr[i - 1] + u)
				break;
			else if((arr[i] + d < arr[i - 1]) && parachute)
				parachute = false;
			else if((arr[i] + d < arr[i - 1]) && !parachute)
				break;			
		}
		cout << i << '\n';
	}
	return 0;
}