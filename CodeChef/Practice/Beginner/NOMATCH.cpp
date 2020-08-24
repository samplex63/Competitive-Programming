#include <bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "The value of \"" << #x << "\" is " << x << '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif

	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		vector<int> vec(n);
		for(int i = 0; i < vec.size(); ++i) {
			cin >> vec[i];
		}
		sort(vec.begin(), vec.end());
		long long ans = 0;
		for(int i = 0, j = n - 1; i < n / 2; ++i, --j) {
			ans += abs((long long)vec[i] - (long long)vec[j]);
		}
		cout << ans << '\n';
	}
	return 0;
}