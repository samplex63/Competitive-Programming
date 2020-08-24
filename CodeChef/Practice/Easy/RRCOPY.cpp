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
		std::vector<int> vec(n);
		for(auto &x: vec) {
			cin >> x;
		}
		sort(vec.begin(), vec.end());
		auto it = unique(vec.begin(), vec.end());
		cout << distance(vec.begin(), it) << '\n';
	}
	return 0;
}