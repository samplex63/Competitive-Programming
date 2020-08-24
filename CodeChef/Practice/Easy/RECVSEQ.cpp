#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		vector<int> vec(n);
		for(int i = 0; i < n; ++i) {
			cin >> vec[i];
		}
		vector<int> diff(n - 1);
		// bool isCorner = false;
		// int posi;
		for(int i = 1; i < n; ++i) {
			diff[i - 1] = vec[i] - vec[i - 1];
		}
		// for(auto x: diff) {
		// 	cout << x << ' ';
		// }
		// cout << '\n';
		long long first = vec[0], r = numeric_limits<long long>::max();
		if(diff[1] == diff[2] && diff[0] != diff[1]) {
			r = diff[n - 2];
			first = vec[1] - r; 
		}
		if(diff[n - 3] == diff[n - 4] && diff[n - 2] != diff[n - 3]) {
			r = diff[0];
		}

		if(r == numeric_limits<long long>::max()) {
			long long sum = accumulate(diff.begin(), diff.end(), 0ll);
			sum /= (n - 1);
			r = sum;
		}
		// cerr << "ERR: " << r << '\n';
		for(int i = 0; i < n; ++i) {
			cout << first << ' ';
			first += r;
		}
		cout << '\n';
	}
	return 0;
}