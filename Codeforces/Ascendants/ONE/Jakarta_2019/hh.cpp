#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())

typedef long long ll;
typedef long double ld;

struct rect {
	ll x, y, add;
	ld differ;
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifdef LOCAL
	freopen("in", "r", stdin);
	#endif

	int n;
	cin >> n;
	vector<rect> vec(n);
	for(int i = 0; i < n; ++i) {
		cin >> vec[i].x >> vec[i].y;
		vec[i].add = vec[i].x  + vec[i].y;
		if(vec[i].x > vec[i].y) swap(vec[i].x, vec[i].y);
		vec[i].differ = vec[i].y - vec[i].x;
	}
	sort(vec.begin(), vec.end(), [](rect a, rect b) {
		if(a.add == b.add) return a.differ < b.differ;
		return a.add > b.add;
	});
	ld ans = 0.0L;
	for(int i = 0; i < n - 1; ++i) {
		ld one = min(vec[i].x, vec[i + 1].x);
		one *= min(vec[i].y, vec[i + 1].y);
		ans = max(ans, one);
	}
	for(int i = 0; i < n; ++i) {
		ans = max(ans, ((ld) vec[i].x * vec[i].y) / 2.0L);
	}
	cout << fixed << setprecision(1) << ans << '\n';
	return 0;
}