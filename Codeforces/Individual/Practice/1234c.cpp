#include <bits/stdc++.h>
using namespace std;

#define first fi
#define second se
#define sz(x) (int) (x).size()

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
		vector<vector<bool>> vec(2, vector<bool>(n));
		char x;
		for(int i = 0; i < n; ++i) {
			cin >> x;
			vec[0][i] = (x == '1' || x == '2');
		}
		for(int i = 0; i < n; ++i) {
			cin >> x;
			vec[1][i] = (x == '1' || x == '2');
		}
		int lane = 0, i;
		for(i = 0; i < n; ++i) {
			if(vec[lane][i]) continue;
			vec[!lane][i]? break: lane = !lane;
		}
		cout << ((i == n && lane)? "YES": "NO") << '\n';
	}
	return 0;
}