#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll h, l;
	cin >> h >> l;
	long double ans = l * l;
	ans -= h * h;
	ans /= 2 * h;
	cout << setprecision(14) << fixed << ans << '\n';
	return 0;
}