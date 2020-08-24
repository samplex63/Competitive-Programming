#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;
	if(n % 2 == 0 || m % 2 == 0) {
		cout << n * m / 2 << '\n';
	} else {
		cout << ((n * m) - 1) / 2 << '\n';
	}

	return 0;
}