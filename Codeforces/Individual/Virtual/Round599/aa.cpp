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

	#ifdef LOCAL
	freopen("in", "r", stdin);
	#endif
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<int> vec(n);
		for(int i = 0; i < n; ++i) cin >> vec[i];
		int ans = 1;
		auto can = [&] (int i) {
			int num = count_if(vec.begin(), vec.end(), [&] (int x) { return x >= i; });
			if(num >= i) return true;
			return false;
		};
		for(int i = 1; i <= n; ++i) {
			if(can(i)) {
				ans = i;
			}
		}
		cout << ans << '\n';
	}

	return 0;
}