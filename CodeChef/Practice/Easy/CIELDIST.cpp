#include <bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "The value of \"" << #x << "\" is " << x << '\n'
typedef long long int LLI;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cout << setprecision(8) << fixed;

	int tt;
	cin >> tt;
	while(tt--) {
		int ds, dt, d;
		cin >> ds >> dt >> d;
		double ans = 0;
		if(d > ds + dt) {
			ans = d - (ds + dt);
		}
		else if(ds > dt + d || dt > ds + d) {
			ans = max(ds, dt) - (d + min(ds, dt));
		}
		cout << ans << '\n';
	}
	return 0;
}