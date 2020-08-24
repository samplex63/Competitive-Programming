#include <bits/stdc++.h>
using namespace std;

#define DEBUG(x) cerr << (#x) << " = " << (x) << '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		vector<string> vec(n);
		for(auto &x: vec) {
			cin >> x;
		}
		array<long long, 32> arr;
		for(int i = 0; i < n; ++i) {
			int num = 0;
			for(auto x: vec[i]) {
				if(x == 'a') num |= 1;
				else if(x == 'e') num |= 1 << 1;
				else if(x == 'i') num |= 1 << 2;
				else if(x == 'o') num |= 1 << 3;
				else if(x == 'u') num |= 1 << 4;
			}
			arr[num]++;
		}
		long long ans = 0;
		for(int i = 0; i < 31; i++) {
			for(int j = i + 1; j < 32; ++j) {
				if((i | j) == 31) {
					ans += arr[i] * arr[j];
				}
			}
		}
		ans += (arr[31] * (arr[31] - 1)) / 2ll;
		cout << ans << '\n';
	}
	return 0;
}