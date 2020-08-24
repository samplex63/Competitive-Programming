#include <bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "The value of \"" << #x << "\" is " << x << '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		int n, k;
		cin >> n >> k;
		vector<int> arr(n);
		for (auto &x: arr) {
			cin >> x;
		}
		sort(arr.begin(), arr.end());
		cout << n - (distance(arr.begin(), lower_bound(arr.begin(), arr.end(), arr[n - k]))) << '\n';
	}
	return 0;
}