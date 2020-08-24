#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		int n, m, k;
		cin >> n >> m >> k;
		vector<int> vec(n);
		for(auto& x: vec) {
			cin >> x;
		}
		bool flag = true;
		for(int i = 0; i < n - 1; ++i) {
			int num = max(vec[i + 1] - k, 0);
			if(vec[i] >= num) {
				m += vec[i] - num;
			} else {
				m -= num - vec[i];
				if(m < 0) {
					flag = false;
					break;
				}
			}
		}
		cout << (flag? "YES": "NO") << '\n';
	}
	return 0;
}