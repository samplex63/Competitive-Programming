#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, s;
	cin >> n >> s;
	int ans = 0;
	while(1) {
		if(s == 0) break;
		if(n > s) {
			ans++;
			break;
		} else {
			ans++;
			s -= n;
		}
	}
	cout << ans << '\n';

	return 0;
}