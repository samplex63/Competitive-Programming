#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		double s, n;
		cin >> n >> s;
		if(n == 1.0) {
			cout << "-1\n";
			continue;
		}
		cout << setprecision(8) << fixed;

		for(int i = 0; i < n - 1; ++i) {
			cout << "0 ";
		}
		double a = (s * s) * (n * n);
		a /= (n - 1.0);
		a = sqrt(a);
		cout << a << '\n';
	}
	return 0;
}