#include<bits/stdc++.h>
using namespace std;

int main() {
	unsigned int t;

	cin >> t;
	while(t--) {
		int c, d, l, a;
		cin >> c >> d >> l;
		a = l / 4;

		if (l % 4 != 0 || a < d || a < ((c + d) - min(c, 2*d)) || a > (c + d))
			cout << "no\n";
		else
			cout << "yes\n";
	}
  return 0;
}