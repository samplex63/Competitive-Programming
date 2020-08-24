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
		for(auto& x: vec) {
			cin >> x;
		}
		if(n <= 2) {
			sort(vec.begin(), vec.end());
		} else {
			
		}
		long long tot = 0;
		for(int i = 0; i < n; ++i) {
			tot += (long long) (vec[i] * (i + 1));
		}
		// for(int i = 0; i < n; ++i) {
		// 	cout << vec[i] << ' ';
		// }
		// cout << " EC" << '\n';
		cout << tot << '\n';
	}
	return 0;
}