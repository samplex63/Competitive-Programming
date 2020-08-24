#include <bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "The value of \"" << #x << "\" is " << x << '\n'
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif

	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		int cnt = 0;
		bool flag = true;
		for(int i = 0; i < n; ++i) {
			int x;
			cin >> x;
			x? cnt++: cnt--;
			if(cnt < 0) {
				flag = false;
			}
		}
		cout << (flag? "Valid": "Invalid") << '\n';
	}
	return 0;
}