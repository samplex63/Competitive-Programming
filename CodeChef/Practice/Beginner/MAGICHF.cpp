#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unsigned int t, n, x, s, swap1, swap2;

	cin >> t;
	while(t--) {
		cin >> n >> x >> s;
		while(s--) {
			cin >> swap1 >> swap2;
			if(x == swap1)
				x = swap2;
			else if(x == swap2)
				x = swap1;
		}
		cout << x << '\n';
	}
	return 0;
}