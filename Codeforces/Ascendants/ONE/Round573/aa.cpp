#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int) (x).size()

typedef long long ll;
typedef long double ld;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	int d = n % 4;
	if(d == 0) {
		// n += 1;
		cout << 1 << " A\n";
	} else if(d == 1) {
		cout << 0 << " A\n";
	} else if(d == 2) {
		cout << 1 << " B\n";
	} else if(d == 3) {
		cout << 2 << " A\n";
	}
	return 0;
}