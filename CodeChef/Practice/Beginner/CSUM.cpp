#include <bits/stdc++.h>
using namespace std;

#define DEBUG(x) cerr << (#x) << " = " << (x) << '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		int n, k;
		cin >> n >> k;
		vector<int> vec(n);
		for(auto& x: vec) cin >> x;

		unordered_set<int> us;
		bool flag = false;
		for(int i = 0; i < n; ++i) {
			int sum = k - vec[i];
			if(sum > 0 && us.find(sum) != us.end()) {
				flag = true;
				break;
			}
			us.insert(vec[i]);
		}
		cout << (flag? "Yes\n": "No\n");
	}
	return 0;
}