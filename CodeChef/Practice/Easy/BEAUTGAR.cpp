#include <bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "The value of \"" << #x << "\" is " << x << '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		string s;
		cin >> s;
		bool flag = false;

		if(s.size() == 2) {
			flag |= (s[0] != s[1]);
		} else {
			int r = 0, g = 0;
			for(int i = 1; i <= s.size(); ++i) {
				if(s[i % (int) s.size()] == s[i - 1]) {
					if(s[i - 1] == 'R') {
						r++;
					} else {
						g++;
					}
				}
			}
			flag |= ((r == 0 && g == 0) || (r == 1 && g == 1));
		}
		cout << (flag? "yes\n": "no\n");
	}
	return 0;
}