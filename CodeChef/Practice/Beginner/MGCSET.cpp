#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t, n, m, a;
	cin >> t;
	
	while (t--) {
		cin >> n >> m;
		long int knt = 0;
		for (int i = 0; i < n; i++) {
			cin >> a;
			if (a % m == 0)
				knt++;
		}
		cout << (long long)(pow(2, knt) - 1) << '\n';
	}
    return 0;
}