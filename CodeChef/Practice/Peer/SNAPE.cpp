#include<bits/stdc++.h>
using namespace std;

int main() {
	int t, ls, b;
	double bsmin, bsmax;

	cin >> t;
	while(t--) {
		cin >> b >> ls;
		bsmax = sqrt(ls * ls + b * b);
		bsmin = sqrt(ls * ls - b * b);
		cout << bsmin << " " << bsmax << endl;
	}
	return 0;
}