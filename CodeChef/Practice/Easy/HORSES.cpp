#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ULL;
typedef long long int LL;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unsigned int t, n;

	cin >> t;
	while(t--) {
		cin >> n;
		std::vector<LL> vec(n);
		for(auto &x: vec)
			cin >> x;

		sort(vec.begin(), vec.end());
		adjacent_difference(vec.begin(), vec.end(), vec.begin());
		vec[0] = INT_MAX;

		auto ans = min_element(vec.begin(), vec.end());
		cout << *ans << '\n';
	}
	return 0;
}