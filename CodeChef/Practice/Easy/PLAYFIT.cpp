#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr, int n) {
	int max_diff = arr[1] - arr[0];

	int min_element = arr[0];
	for(int i = 1; i < n; i++) {
		if(arr[i] - min_element > max_diff) {
			max_diff = arr[i] - min_element;
		}
		
		if(arr[i] < min_element) {
			min_element = arr[i];
		}
	} 
	return max_diff;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		vector<int> vec(n);
		for(auto &x: vec) {
			cin >> x;
		}
		int ans = solve(vec, n);
		if(ans <= 0) {
			cout << "UNFIT\n";
		}
		else {
			cout << ans << '\n';
		}
	}
	return 0;
}