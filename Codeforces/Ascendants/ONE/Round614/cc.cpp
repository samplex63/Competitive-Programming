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
	int n, q;
	cin >> n >> q;
	vector<vector<bool>> vec(2, vector<bool>(n, true));
	int tot = 0;
	for(int qq = 0; qq < q; ++qq) {
		int x, y;
		cin >> x >> y;
		x--;
		y--;
		vec[x][y] = !vec[x][y];
		if(!vec[x][y]) {
			for(int i = max(0, y - 1); i <= min(n - 1, y + 1); ++i) {
				if(!vec[!x][i]) tot++;
			}
		} else {
			for(int i = max(0, y - 1); i <= min(n - 1, y + 1); ++i) {
				if(!vec[!x][i]) tot--;
			}
		}
		cout << (!tot ? "Yes\n" : "No\n");
	}
	return 0;
}