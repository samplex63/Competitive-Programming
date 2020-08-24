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
		int n, k1, k2;
		cin >> n >> k1 >> k2;
		int x;
		bool win = false;
		for(int i = 0; i < k1; ++i) {
			cin >> x;
			if(x == n) win = true;
		}
		for(int i = 0; i < k2; ++i) {
			cin >> x;
		}
		cout << (win? "YES": "NO") << '\n';
	}
	return 0;
}