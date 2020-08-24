#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	unsigned int t;
	cin >> t;

	while(t--) {
		unsigned int n, onecnt = 0, temp;
		cin >> n;

		for(int i = 0; i < n; i++) {
			cin >> temp;

			if(temp % 2)
				onecnt++;
		}

		if(n == 1) {
			cout << "1\n";
			continue;
		}

		if(onecnt % 2 == 0)
			cout << "1\n";
		else
			cout << "2\n";
	}

	return 0;
}
