#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int) (x).size()

typedef long long ll;
typedef long double ld;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int x, y, z;
	cin >> x >> y >> z;
	if(min(x, y) + z >= max(x, y)) {
		if(z == 0) cout << "0\n";
		else cout << "?\n";
	} else if(x == y) {
		cout << "0\n";
	} else if(x > y) {
		cout << "+\n";
	} else if(x < y) {
		cout << "-\n";
	}
	return 0;
}