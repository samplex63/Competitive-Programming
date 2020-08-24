#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, d;
	cin >> n >> d;
	std::vector<int> vec(n);
	for(auto &x: vec) {
		cin >> x;
	}
	long long int ans = 0;
	sort(vec.begin(), vec.end());
	for(int i = 0; i < n - 1; ++i) {
		if(vec[i] >= vec[i + 1] - d) {
			++ans;
			++i;
		}
	}
	cout << ans << '\n';
	return 0;
}