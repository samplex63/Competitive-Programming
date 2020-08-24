#include <bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "The value of \"" << #x << "\" is " << x << '\n'
typedef long long int LLI;

bool solve(LLI arr[], LLI n, LLI sum_val) {
	if(sum_val == 0) {
		return true;
	}
	if(n == 0) {
		return false;
	}
	if(arr[n - 1] > sum_val) {
		return solve(arr, n - 1, sum_val);
	}
	return solve(arr, n - 1, sum_val) | solve(arr, n - 1, sum_val - arr[n - 1]);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		LLI n, sum_val;
		cin >> n >> sum_val;
		LLI arr[n];

		for(auto &x: arr) {
			cin >> x;
		}

		cout << (solve(arr, n, sum_val)? "Yes\n": "No\n");
	}
	return 0;
}