#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unsigned int t;
	cin >> t;
	while(t--) {
		int x, y, n, k;
		cin >> x >> y >> k >> n;
		vector<pair<int, int>> vec(n);
		for(int i = 0; i < n; ++i) {
			cin >> vec[i].first >> vec[i].second;
		}
		bool flag = false;
		for(int i = 0; i < n; ++i) {
			if(vec[i].second <= k) {
				if(vec[i].first + y >= x) {
					flag = true;
					break;
				}
			}
		}
		flag? cout << "LuckyChef\n": cout << "UnluckyChef\n";
	}
	return 0;
}