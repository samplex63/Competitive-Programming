#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())

using ll = long long;
using ld = long double;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		vector<int> vec(n);
		for(int i = 0; i < n; ++i) {
			cin >> vec[i];
		}
		sort(vec.rbegin(), vec.rend());
		
		// label:
		// for(int i = 0; i < n - 1; ++i) {
		// 	for(int j = i + 1; j < n; ++j) {
		// 		if(vec[i] - i == vec[j] - j) {
		// 			swap(vec[i], vec[j]);
		// 			goto label;
		// 		}
		// 	}
		// }
		for(int i = 0; i < n; ++i) {
			cout << vec[i] << ' ';
		}
		cout << '\n';
	}
	return 0;
}