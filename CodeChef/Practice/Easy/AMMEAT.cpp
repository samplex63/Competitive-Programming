#include <bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "The value of \"" << #x << "\" is " << x << '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		long long int n, k;
		cin >> n >> k;
		vector<long long int> vec(n);
		for(auto &x: vec) {
			cin >> x;
		}

		sort(vec.rbegin(), vec.rend());
		int ans = -1;
		unsigned long long int sum = 0;
		for(int i = 0; i < n; ++i) {
			sum += vec[i];
			if(sum >= k) {
				ans = i + 1;
				break;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}