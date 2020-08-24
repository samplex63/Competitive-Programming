#include <bits/stdc++.h>
using namespace std;

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
		bool flag = false;
		for(int i = 0; i < n - 2; ++i) {
			for(int j = i + 2; j < n; ++j) {
				if(vec[i] == vec[j]) {
					flag = true;
					break;
				}
			}
		}
		cout << (flag? "YES" : "NO") << '\n';
	}
	return 0;
}