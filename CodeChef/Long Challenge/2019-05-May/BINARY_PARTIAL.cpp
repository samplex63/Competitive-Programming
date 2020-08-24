#include <bits/stdc++.h>
using namespace std;

#define DEBUG(x) cerr << (#x) << " = " << (x) << '\n'
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
		ll n, z;
		cin >> n >> z;
		vector<bool> bs(n);
		for(int i = 0; i < n; ++i) {
			int x;
			cin >> x;
			bs[i] = x;
		}
		while(z--) {
			bool flag = true;
			for(int i = 0; i < n - 1; ++i) {
				if(bs[i] == false && bs[i + 1] == true) {
					swap(bs[i], bs[i + 1]);
					flag = false;
					i++;
				}
			}
			if(flag) {
				break;
			}
		}
		for(int i = 0; i < n; ++i) {
			cout << bs[i] << ' ';
		}
		cout << '\n';
	}
	return 0;
}