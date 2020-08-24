#include <bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "The value of \"" << #x << "\" is " << x << '\n'
typedef long long int LLI;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		vector<string> vec(n);

		for(auto &x: vec) {
			cin >> x;
		}

		LLI ans = 0;
		bool block[n];
		fill(block, block + n, true);
		for(int i = n - 1; i >= 0; --i) {
			bool flag = true;
			for(int j = n - 1; j >= 0; --j) {
				if(vec[i][j] == '#') {
					block[j] = false;
					flag = false;
				}
				else {
					if(block[j] && flag) {
						ans++;
					}
				}
			}
		}

		cout << ans << '\n';
	}
	return 0;
}