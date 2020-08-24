#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	vector<int> vec(n - 1);

	for(int i = 0; i < n - 1; ++i) {
		cin >> vec[i];
	}

	vector<int> ans(n, 0);
	for(int i = 0; i < n - 1; ++i) {
		ans[i + 1] = (ans[i] + vec[i]);
	}
	int mini = *min_element(ans.begin(), ans.end());
	if(mini > 1) {
		cout << -1 << '\n';
		return 0;
	}

	for(int i = 0; i < n; ++i) {
		ans[i] += (1 - mini);
	}

	// for(int i = 0; i < n; ++i) {
	// 	cout << ans[i] << ' ';
	// }
	vector<int> check(n);
	iota(check.begin(), check.end(), 1);

	// for(int i = 0; i < n; ++i) {
	// 	cout << check[i] << ' ';
	// }
	vector<int> check2(ans);
	sort(check2.begin(), check2.end());
	if(check2 == check) {
		for(int i = 0; i < n; ++i) {
			cout << ans[i] << ' ';
		}
		cout << '\n';
	} else {
		cout << -1 << '\n';
	}
	return 0;
}