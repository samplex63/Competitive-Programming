#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unsigned int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		k = min(k, (n - k));
		vector<int> vec(n);
		for(auto &x: vec) {
			cin >> x;
		}

		long long int son = 0, chef = 0;
		sort(vec.begin(), vec.end());
		for(int i = 0; i < k; ++i) {
			son += vec[i];
		}
		for(int i = k; i < n; ++i) {
			chef += vec[i];
		}

		cout << abs(chef - son) << '\n';
	}
	return 0;
}