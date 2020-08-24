#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unsigned int t;
	cin >> t;
	while(t--) {
		long long int l, d, c, s;
		cin >> l >> d >> s >> c;
		for(int i = 1; i < d; ++i) {
			s = s + s * c;
			if(s >= l) {
				break;
			}
		}
		if(s >= l) {
			cout << "ALIVE AND KICKING\n";
		}
		else {
			cout << "DEAD AND ROTTING\n";
		}
	}
	return 0;
}