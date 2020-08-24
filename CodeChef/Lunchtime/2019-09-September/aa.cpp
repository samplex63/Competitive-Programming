#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) (int) (x).size()

typedef long long ll;
typedef long double ld;

typedef pair<int, int> pi;
typedef pair<ll, ll> pl;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--) {
		int n, m;
		cin >> n >> m;
		vector<int> vec(n, 0);
		bool flag = true;
		for(int i = 0; i < m; ++i) {
			int ind;
			cin >> ind;
			ind--;
			if(any_of(vec.begin(), vec.end(), [&](int x) { return vec[ind] > x; })) {
				flag = false;
			}
			vec[ind]++;
		}
		cout << (flag? "YES": "NO") << '\n';
	}
	return 0;
}