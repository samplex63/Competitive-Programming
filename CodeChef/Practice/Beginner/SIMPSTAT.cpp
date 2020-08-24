#include<bits/stdc++.h>
using namespace std;

int main() {
	unsigned int t, n, k;

	cin >> t;
	while(t--) {
		double ans = 0;
		cin >> n >> k;
		
		vector<long int> vec(n);
		for(auto &x: vec)
			cin >> x;
		
		sort(vec.begin(), vec.end());
		for(int i = k; i < (n - k); ++i)
			ans += vec[i];
		ans /= (n - (2 * k));
		cout << fixed << setprecision(6) << ans << endl;
	}
	return 0;
}