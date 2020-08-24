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
	auto sq = [](ld i) {
		return i * i;
	};
	ld x1, y1, r1, x2, y2, r2;
	cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
	ld dist = sq(x1 - x2) + sq(y1 - y2);
	ld sqdist = sqrt(dist);
	if(sqdist >= r1 + r2) {
		cout << "0.000000000000000000\n";
		return 0;
	}
	if(sqdist + min(r1, r2) <= max(r1, r2)) {
		cout << setprecision(15) << fixed << acos(-1.0L) * sq(min(r1, r2)) << '\n';
		return 0;
	}
	ld d1 = sq(r1) - sq(r2) + dist;
	d1 /= (2.0L * sqdist);
	ld d2 = sqdist - d1;
	ld theta1 = acos(d1 / r1) * 2;
	ld theta2 = acos(d2 / r2) * 2;
	ld ans = ((theta1 - sin(theta1)) * sq(r1));
	ans += ((theta2 - sin(theta2)) * sq(r2));
	ans /= 2.0L;
	cout << setprecision(15) << fixed << ans << '\n';
	return 0;
}