#include<bits/stdc++.h>
using namespace std;

int main() {
	unsigned int t, m, n;

	cin >> t;
	while(t--) {
		unsigned long int ans = 0, num;
		cin >> n >> m;
		unsigned int alice[n];
		for(auto &x: alice)
			cin >> x;
		sort(alice, alice + n);
		while(m--) {
			cin >> num;
			if(binary_search(alice, alice + n, num))
				ans++;
		}
		cout << ans << endl;
	}
	return 0;
}