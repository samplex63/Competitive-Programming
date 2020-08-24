#include<bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t, n, l, end, start, midl, midr, j, isub, jsub;
	array<int, 1000> arr;
	unsigned long long int ans;

	cin >> t;
	while(t--) {
		ans = 0;
		cin >> n;
		for(int i = 0; i < n; ++i)
			cin >> arr[i];
		sort(arr.begin(), arr.begin() + n);
		for(l = 0; l < n; ++l) {
			if(l % 2 == 0) {
				ans += n - l;
				ans %= 1000000007;
			}
		}
		for(int i = 0; i < n - 1; ++i) {
			j = i + 1;
			isub = i;
			jsub = j;
			if(arr[i] == arr[j]) {
				while(isub >= 0 && jsub < n) {
					isub--;
					jsub++;
					ans++;
					ans %= 1000000007;
				}
			}
		}
		ans %= 1000000007;
		cout << ans << endl;
	}
	return 0;
}