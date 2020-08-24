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
	}
	sort(vec.begin(), vec.end());
	int maxi = vec.back();
	cout << maxi;
	sort(vec.begin(), vec.end() - 1, [&](int a, int b) {
		return __builtin_popcount(a & maxi) < __builtin_popcount(b & maxi);
	});
	for(int i = 0; i < n - 1; ++i) {
		cout << ' ' << vec[i];
	}
	cout << '\n';
	// cout << '\n';
	// vector<pair<int, int>> ans = {{vec.back(), 0}}, do_not;
	// for(int i = 0; i < n - 1; ++i) {
	// 	ans.push_back(vec[i], __built_in_popcount(vec[i] & vec.back()));
	// }
	// sort(ans.begin() + 1, ans.end(), [](pair<int, int> a, pair<int, int> b) { return })
	// for(int i = 0; i < n - 1; ++i) {
	// 	if(binary_search(do_not.begin(), do_not.end(), i)) continue;
	// 	ans.push_back(vec[i]);
	// }
	// for(int i = 0; i < n; ++i) {
	// 	cout << ans[i] << ' ';
	// }
	return 0;
}