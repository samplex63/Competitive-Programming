#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	vector<int> vec(n + n);
	for(int i = 0; i < n; ++i) {
		cin >> vec[i];
		vec[n + i] = vec[i];
	}

	int ans = 0, cnt = 0;
	for(int i = 0; i < 2 * n; ++i) {
		if(vec[i] == 1) {
			cnt++;
		} else {
			ans = max(cnt, ans);
			cnt = 0;
		}
	}
	cout << ans << '\n';

	return 0;
}