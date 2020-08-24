#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int q;
	cin >> q;
	while(q--) {
		ll a, b, c;
		cin >> a >> b >> c;
		cout << (a + b + c) / 2ll << '\n';
	}

	return 0;
}