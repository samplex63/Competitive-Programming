#include<bits/stdc++.h>
using namespace std;

#define LL long long int
#define ULL unsigned long long int

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unsigned int t;

	cin >> t;
	while(t--) {
		unsigned int n;
		cin >> n;
		ULL arr[n];
		for(auto &x: arr)
			cin >> x;

		ULL ans = (arr[0] * arr[1]) / __gcd(arr[0], arr[1]);
		for(unsigned int i = 0; i < n - 1; ++i) {
			for(unsigned int j = i + 1; j < n; ++j) {
				ULL lcm = (arr[i] * arr[j]) / __gcd(arr[i], arr[j]);
				ans = min(lcm, ans);
			}
		}

		cout << ans << '\n';
	}
	return 0;
}