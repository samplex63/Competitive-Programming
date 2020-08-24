#include <bits/stdc++.h>
using namespace std;

#define DEBUG(x) cerr << (#x) << " = " << (x) << '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		string s;
		cin >> s;
		int sum = 0;
		for(int i = 0; i < (int)s.size(); ++i) {
			sum += s[i] - '0';
		}
		int res = (10 * s.size() - sum) % 10;
		cout << s << res << '\n';
	}
	return 0;
}