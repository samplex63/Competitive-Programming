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
	vector<int> vec1(n), vec2(n);
	for(auto& x: vec1) cin >> x;
	for(auto& x: vec2) cin >> x;
	vector<int> diff(n);
	for(int i = 0; i < n; ++i) {
		diff[i] = vec1[i] - vec2[i];
	}
	sort(diff.begin(), diff.end());
	ll ans = 0;
	for(int i = 0; i < n; ++i) {
		auto it = lower_bound(diff.begin(), diff.end(), -diff[i] + 1);
		int dist = it - diff.begin();
		if(dist < i) ans--;
		ans += n - dist;
	}
	cout << ans / 2 << '\n';
	return 0;
}