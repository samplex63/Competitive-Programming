#include<bits/stdc++.h>
using namespace std;

#define ULL unsigned long long int
#define LL long long int

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unsigned int t, n, q, x;

	cin >> t;
	while(t--) {
		ULL mul = 1;
		cin >> n >> q;
		while(n--) {
			cin >> x;
			mul *= x;
		}
		while(q--) {
			cin >> x;
			if(mul == 0)
				cout << "0\n";
			else
				cout << x / mul << " ";
		}
		cout << '\n';
	}
	return 0;
}