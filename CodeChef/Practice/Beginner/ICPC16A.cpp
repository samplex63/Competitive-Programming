#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		if(y1 == y2) {
			cout << ((x1 > x2)? "left": "right") << '\n';
		} else if(x1 == x2) {
			cout << ((y1 > y2)? "down": "up") << '\n';
		} else {
			cout << "sad\n";
		}
	}
	return 0;
}