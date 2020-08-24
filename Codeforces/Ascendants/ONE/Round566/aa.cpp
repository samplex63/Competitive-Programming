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
	if(n & 1) {
		cout << 0 << '\n';
	} else {
		cout << (ll) pow(2, n / 2) << '\n';
	}
	return 0;
}