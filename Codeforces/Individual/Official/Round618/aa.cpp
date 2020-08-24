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
	int tt;
	cin >> tt;
	while(tt--) {

		int n;
	cin >> n;
	int sum = 0, ans = 0;
	for(int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		if(x == 0) {
			sum++;
			ans++;
		}
		sum += x;
	}
	if(sum == 0) ans++;
	cout << ans << '\n';
}
	return 0;
}