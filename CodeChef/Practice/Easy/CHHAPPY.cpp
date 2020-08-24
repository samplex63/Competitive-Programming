#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unsigned int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int arr[n + 1];
		for(int i = 1; i <= n; ++i) {
			cin >> arr[i];
		}
		vector< pair<int, int> > vec(n + 1);
		for(int i = 1; i <= n; ++i) {
			vec[i].first = arr[arr[i]];
			vec[i].second = arr[i];
		}
		sort(vec.begin(), vec.end());
		bool flag = false;
		for(int i = 1; i < n; ++i) {
			if(vec[i].first == vec[i + 1].first) {
				if(vec[i].second != vec[i + 1].second) {
					flag = true;
					break;
				}
			}
		}
		flag? cout << "Truly Happy\n": cout << "Poor Chef\n";
	}
	return 0;
}