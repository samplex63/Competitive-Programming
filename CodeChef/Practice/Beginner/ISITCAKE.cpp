#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unsigned int t;
	cin >> t;
	while(t--) {
		int ans = 0;
		for(int i = 0; i < 10; ++i) {
			for(int j = 0; j < 10; ++j) {
				int value;
				cin >> value;
				if(value <= 30) {
					ans++;
				}
			}
		}
		if(ans >= 60) {
			cout << "yes\n";
		}
		else {
			cout << "no\n";
		}
	}
	return 0;
}