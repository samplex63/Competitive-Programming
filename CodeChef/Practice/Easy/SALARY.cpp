#include <bits/stdc++.h>
using namespace std;

typedef long long int LL;
typedef unsigned long long int ULL;

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
		unsigned int ans = 0;
		for(int i = 1; i < vec.size(); ++i) {
			ans += vec[i] - vec.front();
		}
		cout << ans << '\n';
	}
	return 0;
}