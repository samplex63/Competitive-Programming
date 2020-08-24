#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ULL;
typedef long long int LL;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	unsigned int t;

	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		int arr[m];
		for(auto &x: arr) {
			cin >> x;
		}
		sort(arr, arr + m);

		int cnt = 1;
		std::vector<int> chef;
		std::vector<int> assistant;

		for(int i = 1; i <= n; ++i) {
			if(binary_search(arr, arr + m, i)) {
				continue;
			}
			if(cnt % 2) {
				chef.push_back(i);
			}
			else {
				assistant.push_back(i);
			}
			cnt++;
		}
		if(chef.empty()) {
			cout << '\n';
		}
		else {
			for(auto &x: chef) {
				cout << x << ' ';
			}
			cout << '\n';
		}

		if(assistant.empty()) {
			cout << '\n';
		}
		else {
			for(auto &x: assistant) {
				cout << x << ' ';
			}
			cout << '\n';
		}
	}
	return 0;
}