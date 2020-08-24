#include <bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "The value of \"" << #x << "\" is " << x << '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		int ans = sqrt(n);
		int left, right;

		for(int i = ans; i > 0; --i) {
			if(n % i == 0) {
				left = i;
				break;
			}
		}
		WATCH(left);
		right = n / left;
		cout << right - left << '\n';

	}
	return 0;
}