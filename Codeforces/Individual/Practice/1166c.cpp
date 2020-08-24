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
	int n;
	cin >> n;
	vector<int> vec(n);
	for(int i = 0; i < n; ++i) {
		cin >> vec[i];
		vec[i] = abs(vec[i]);
	}
	ll ans = 0;
	sort(vec.begin(), vec.end());
	for(int i = 0; i < n; ++i) {
		auto it = upper_bound(vec.begin(), vec.end(), 2 * vec[i]) - 1;
		int dist = it - vec.begin();
		ans += dist - i;
	}
	cout << ans << '\n';
	return 0;
}