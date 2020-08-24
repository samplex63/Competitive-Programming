#include <bits/stdc++.h>
using namespace std;

#define DEBUG(x) cerr << (#x) << " = " << (x) << '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		int n, k, ans;
		cin >> n >> k >> ans;
		int arr[n];
		for(int i = 0; i < n; ++i) {
			cin >> arr[i];
		}
		string op;
		cin >> op;
		if(k != 0) {
			if(op.front() == 'X') {
				if(k % 2 == 1) {
					for(int i = 0; i < n; ++i) {
						ans ^= arr[i];
					}
				}
			} else if(op.front() == 'A') {
				for(int i = 0; i < n; ++i) {
					ans &= arr[i];
				}
			} else {
				// int sub = arr[0];
				for(int i = 0; i < n; ++i) {
					ans |= arr[i];
				}
			}
		}
		cout << ans << '\n';
	}
	return 0;
}