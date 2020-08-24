#include <bits/stdc++.h>
using namespace std;

#define sz(x) static_cast<int>((x).size())

using ll = long long;
using ld = long double;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<int> vec(n);
	for(int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		vec[x - 1] = i;
	}
	ll ans = 0;
	for(int i = 0; i < n - 1; ++i) {
		ans += abs(vec[i] - vec[i + 1]);
	}
	cout << ans << '\n';
	return 0;
}