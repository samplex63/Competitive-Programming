#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())

typedef long long ll;
typedef long double ld;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, R, r;
	cin >> n >> R >> r;
	if(r > R) {
		cout << "NO\n";
		return 0;
	}
	if(2 * r > R) {
		cout << (n == 1 ? "YES\n": "NO\n");
		return 0;
	}
	ld theta = asin((ld) r / (R - r));
	theta *= 2.0L * n;
	if(theta > 2 * acos(-1.0L)) {
		cout << "NO\n";
	} else {
		cout << "YES\n";
	}
	return 0;
}