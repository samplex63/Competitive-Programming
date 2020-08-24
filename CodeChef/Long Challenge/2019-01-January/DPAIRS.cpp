#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, x;
	cin >> n >> m;
	std::vector<pair<int, int>> vec(n);
	for(int i = 0; i < n; ++i) {
		cin >> vec[i].first;
		vec[i].second = i;
	}
	int posi = 0;
	int largest = INT_MIN;
	for(int i = 0; i < m; ++i) {
		cin >> x;
		if(x > largest) {
			largest = x;
			posi = i;
		}
	}
	sort(vec.begin(), vec.end());
	for(int i = 0; i < m; ++i) {
		cout << vec[0].second << ' ' << i << '\n';
	}
	for(int i = 1; i < n; ++i) {
		cout << vec[i].second << ' ' << posi << '\n';
	}
	return 0;
}