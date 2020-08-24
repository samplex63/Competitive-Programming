#include<bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "The value of \"" << #x << "\" is " << x << '\n'
typedef long long LLI;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif

	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		vector<string> vec(n);

		for(auto &x: vec) {
			cin >> x;
		}

		LLI ans1 = 0, ans2 = 0;
		
		for(int i = 0; i < n; ++i) {
			for(int j = 0; j < m; ++j) {
				if((i + j) % 2 == 0) {
					if(vec[i][j] != 'G') {
						ans1 += 5;
					}
				} else {
					if(vec[i][j] != 'R') {
						ans1 += 3;
					}
				}
			}
		}

		for(int i = 0; i < n; ++i) {
			for(int j = 0; j < m; ++j) {
				if((i + j) % 2 == 0) {
					if(vec[i][j] != 'R') {
						ans2 += 3;
					}
				} else {
					if(vec[i][j] != 'G') {
						ans2 += 5;
					}
				}
			}
		}
		
		cout << min(ans1, ans2) << '\n';
	}
	return 0;
}