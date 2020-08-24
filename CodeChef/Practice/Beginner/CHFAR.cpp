#include <bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "The value of \"" << #x << "\" is " << x << '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		bool flag = false;
		int n, k;
		cin >> n >> k;
		vector<int> vec(n);
		for(auto &x: vec) {
			cin >> x;
		}

		if(n - count(vec.begin(), vec.end(), 1) <= k) {
			flag = true;
		}
		else {
			if(n - count(vec.begin(), vec.end(), 0) <= k) {
				flag = true;
			}
		}
		cout << (flag? "YES\n": "NO\n");
	}
	return 0;
}