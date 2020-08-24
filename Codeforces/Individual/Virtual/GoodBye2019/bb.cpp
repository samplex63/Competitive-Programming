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
		vector<int> vec(n);
		for(int i = 0; i < n; ++i) {
			cin >> vec[i];
		}
		int ans1 = -1, ans2;
		for(int i = 0; i < n - 1; ++i) {
			if(abs(vec[i] - vec[i + 1]) > 1) {
				ans1 = i + 1;
				ans2 = i + 2;
				break;
			}
		}
		if(ans1 == -1) {
			cout << "NO\n";
		} else {
			cout << "YES\n" << ans1 << ' ' << ans2 << '\n';
		}
	}
	return 0;
}