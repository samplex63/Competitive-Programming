#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, n;
	cin >> a >> b >> n;
	bool flag = false;
	for(int i = 0;; ++i) {
		int num = __gcd(a, n), num2 = __gcd(b, n);
		if(i & 1) {
			n -= num2;
			if(n < 0) break;
		} else {
			n -= num;
			if(n < 0) {
				flag = true;
				break;
			}
		}
	}
	cout << flag << '\n';

	return 0;
}