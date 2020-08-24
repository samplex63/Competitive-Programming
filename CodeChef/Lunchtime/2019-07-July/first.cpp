#include <bits/stdc++.h>
using namespace std;

int sum(int s) {
	int sumr = 0;
	while(s > 0) {
		sumr += (s % 10);
		s /= 10;
	}
	return sumr;
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
		for(int i = 0; i < n; ++i) {
			cin >> vec[i];
		}
		int maxi = INT_MIN;
		for(int i = 0; i < n - 1; ++i) {
			for(int j = i + 1; j < n; ++j) {
				maxi = max(maxi, sum(vec[i] * vec[j]));
			}
		}
		cout << maxi << '\n';
	}
	return 0;
}