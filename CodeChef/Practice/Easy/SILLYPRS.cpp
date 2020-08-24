#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		int odd1 = 0, odd2 = 0;
		long long sum = 0;
		for(int i = 0; i < n; ++i) {
			int x;
			cin >> x;
			sum += x;
			if(x & 1) odd1++;
		}
		for(int i = 0; i < n; ++i) {
			int x;
			cin >> x;
			sum += x;
			if(x & 1) odd2++;
		}
		int diff = abs(odd1 - odd2);
		diff /= 2;
		sum /= 2;
		cout << sum - diff << '\n';
	}
	return 0;
}