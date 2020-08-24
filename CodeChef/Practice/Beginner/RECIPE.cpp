#include<bits/stdc++.h>
using namespace std;

int findGCD(int arr[], int n) {
    int result = arr[0];
    for (int i = 1; i < n; i++)
        result = __gcd(arr[i], result);
    return result; 
}

int main() {
	int t, arr[50], n, length;

	cin >> t;
	while(t--) {
		cin >> n;
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		for(int i = 0; i < n; i++)
			cout << arr[i] / findGCD(arr, n) << " ";
		cout << endl;
	}
	return 0;
}