#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unsigned int t;
	cin >> t;
	while(t--) {
		int k, n;
		cin >> n >> k;
		vector< pair<int, int> > ans;
		bool column[n + 1] = {}, row[n + 1] = {};

		for(int i = 0; i < k; ++i) {
			int l, r;
			cin >> l >> r;
			column[l] = true;
			row[r] = true;
		}

		int j = 1;
		for(int i = 1; i <= n; ++i) {
			if(!column[i]) {
				for(; j <= n; ++j) {
					if(!row[j]) {
						ans.push_back(make_pair(i, j));
						column[i] = true;
						row[j] = true;
						break;
					}
				}
			}
		}
		cout << ans.size() << ' ';
		for(int i = 0; i < ans.size(); ++i) {
			cout << ans[i].first << ' ' << ans[i].second << ' ';
		}
		cout << '\n';
	}
	return 0;
}