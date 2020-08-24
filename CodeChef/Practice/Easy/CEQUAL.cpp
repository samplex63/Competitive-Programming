#include <bits/stdc++.h>
using namespace std;

#define DEBUG(x) cerr << (#x) << " = " << (x) << '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		unordered_set<int> us;
		for(int i = 0; i < n; ++i) {
			int x;
			cin >> x;
			us.insert(x);
		}
		cout << (((int) us.size() == n)? "No\n": "Yes\n");
	}
	return 0;
}