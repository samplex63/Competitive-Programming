#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) (int) (x).size()

typedef long long ll;
typedef long double ld;

const ld pi = acos(-1.0L);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<pair<ld, int>> vec(n);
	for(int i = 0; i < n; ++i) {
		ld x, y;
		cin >> x >> y;
		vec[i].fi = atan2(y, x);
		vec[i].se = i + 1;
	}
	sort(vec.rbegin(), vec.rend());
	ld mini = numeric_limits<ld>::max();
	pair<int, int> ans(1, 2);
		for(int i = 1; i <= n; ++i) {
		ld ang = vec[i - 1].fi - vec[i % n].fi;
		if(ang < 0) {
			ang = 2.0L * pi + ang;
		}
		// cerr << ang << " <- ang\n";
		if(ang < mini) {
			mini = ang;
			ans.fi = vec[i % n].se;
			ans.se = vec[i - 1].se;
		}
	}
	cout << ans.fi << ' ' << ans.se << '\n';
	return 0;
}
