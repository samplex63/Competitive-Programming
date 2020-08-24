#include<bits/stdc++.h>
using namespace std;

int main() {
	int t, n, m ,k;

	cin >> t;
	while(t--) {
		cin >> n >> m >> k;
		if(abs(n - m) > k)
			cout << abs(n - m) - k << endl;
		else
			cout << "0\n";
	}
	return 0;
}