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
		int n, x;
		cin >> n >> x;
		std::vector<int> vec(n);
		for(auto &x: vec) {
			cin >> x;
		}
		int min_vec = *min_element(vec.begin(), vec.end());
		auto total = accumulate(vec.begin(), vec.end(), 0);
		auto remain = div(total, x);
		if(remain.rem >= min_vec) {
			cout << "-1" << '\n';
		}
		else {
			cout << remain.quot << '\n';
		}
	}
	return 0;
}