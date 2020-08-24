#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unsigned int t;
	cin >> t;
	while(t--) {
		int n, c, q;
		cin >> n >> c >> q;
		while(q--) {
			int l, r;
			cin >> l >> r;
			if(c >= l && c <= r) {
				int posil = c - l;
				c = r - posil;
			}
		}
		cout << c << '\n';
	}
	return 0;
}