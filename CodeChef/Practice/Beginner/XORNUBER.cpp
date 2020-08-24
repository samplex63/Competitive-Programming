#include <bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "The value of \"" << #x << "\" is " << x << '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif

	int tt;
	cin >> tt;
	while(tt--) {
		long long n;
		cin >> n;
		if(n == 1) {
			cout << "2\n";
		} else if (n % 2 == 0) {
			cout << "-1\n";
		} else if((n & (n + 1)) == 0) {
			cout << n / 2 << '\n';
		} else {
			cout << "-1\n";
		}
	}
	return 0;
}