#include<bits/stdc++.h>
using namespace std;

#define forn(i, n) for(int i = 0; i < (n); i++)

int main() {
	int t, a, b;

	cin >> t;
	while(t--) {
		cin >> a >> b;
		cout << max(a, b) << " " << a + b << endl;
	}
	return 0;
}