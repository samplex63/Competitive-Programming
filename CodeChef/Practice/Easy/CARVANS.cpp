#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ULL;
typedef long long int LL;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unsigned int t;

	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int arr[n];
		for(auto &x: arr)
			cin >> x;
		int ans = 1;
		for(int i = 0; i < n - 1; ++i) {
			if(arr[i] < arr[i + 1]) {
				arr[i + 1] = arr[i];
			}
			else {
				ans++;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}