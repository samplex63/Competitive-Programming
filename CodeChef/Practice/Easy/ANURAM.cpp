#include <bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "The value of \"" << #x << "\" is " << x << '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		int n, m;
		cin >> n >> m;

		vector<int> vec(m);

		for(auto &x: vec) {
			cin >> x;
		}

		int minm = *min_element(vec.begin(), vec.end());
		int maxm = *max_element(vec.begin(), vec.end());

		WATCH(minm);
		WATCH(maxm);

		vector<int> ans(n);
		for(int i = 0; i < n; ++i) {
			ans[i] = max(abs(i - minm), abs(i - maxm));
		}

		for(auto x: ans) {
			cout << x << ' ';
		}
		cout << '\n';
	}
	return 0;
}