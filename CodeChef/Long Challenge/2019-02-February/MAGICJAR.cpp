#include <bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "The value of " << #x << " is " << x << '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		long long int n;
		cin >> n;
		vector<long long int> vec(n);
		for(auto &x: vec) {
			cin >> x;
		}
		cout << accumulate(vec.begin(), vec.end(), 1ll) - n << '\n';
	}
	return 0;
}