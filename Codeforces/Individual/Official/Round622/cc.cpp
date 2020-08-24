#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
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
		cin >> vec[i];
	}
	ll ans = 0;
	vector<int> fans;
	for(int i = 0; i < n; ++i) {
		vector<int> cp(vec);
		int curm = cp[i];
		for(int j = i - 1; j >= 0; --j) {
			curm = min(curm, cp[j]);
			cp[j] = curm;
		}
		curm = cp[i];
		for(int j = i + 1; j < n; ++j) {
			curm = min(curm, cp[j]);
			cp[j] = curm;
		}
		ll tot = accumulate(cp.begin(), cp.end(), 0ll);
		if(tot > ans) {
			ans = tot;
			fans = cp;
		}
	}
	for(auto x: fans) cout << x << ' ';
	cout << '\n';
	return 0;
}