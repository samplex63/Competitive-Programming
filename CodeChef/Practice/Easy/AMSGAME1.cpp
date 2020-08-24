#include <bits/stdc++.h>
using namespace std;

typedef long long int LL;
typedef unsigned long long int ULL;

int findGCD(int arr[], int n) {
    int result = arr[0];
    for (int i = 1; i < n; ++i) {
        result = __gcd(arr[i], result);
    }
    return result;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unsigned int t;

	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int arr[n];
		for(auto &x: arr) {
			cin >> x;
		}
		cout << findGCD(arr, n) << '\n';		
	}
	return 0;
}