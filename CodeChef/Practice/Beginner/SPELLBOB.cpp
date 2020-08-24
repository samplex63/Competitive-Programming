#include <bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "The value of \"" << #x << "\" is " << x << '\n'
typedef long long int LLI;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif

	int tt;
	cin >> tt;
	while(tt--) {
		string up, down;

		cin >> up >> down;

		bool flag = false;
		for(int k = 0; !flag && k < (1 << 3); ++k) {
			string ans;
			for(int i = 0; i < 3; ++i) {
				if(k & (1 << i)) {
					ans += up[i];
				}
				else {
					ans += down[i];
				}
			}
			if(ans == "bob" || ans == "obb" || ans == "bbo") {
				flag = true;
			}
		}

		cout << (flag? "yes": "no") << '\n';
	}
	return 0;
}