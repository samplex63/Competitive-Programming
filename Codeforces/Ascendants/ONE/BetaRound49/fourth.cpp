#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	vector<int> vecS(n), vecF(n);
	for(auto& x: vecF) cin >> x;
	for(auto& x: vecS) cin >> x;

	vector<pair<int, int>> ans;

	for(int i = 0; i < n - 1; ++i) {
		if(vecS[i] != vecF[i]) {
			for(int j = 0; j < n; ++j) {
				if(vecF[i] == vecS[j]) {
					ans.push_back({i + 1, j + 1});
					swap(vecS[i], vecS[j]);
					break;
				}
			}
		}
	}
	cout << ans.size() << '\n';
	for(auto x: ans) {
		cout << x.first << ' ' << x.second << '\n';
	}

	return 0;
}