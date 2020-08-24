#include <bits/stdc++.h>
using namespace std;

const int = 1e9 + 7;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		string s;
		cin >> s;
		bool flag = false, trigger = false;
		int phase = 0;
		long long int ans = 0;
		if(s.size() % 2 == 1) {
			if(s[s.size() / 2] == '?') {
				ans = 26;
				phase++;
			}
		}
		for(int i = 0, li = s.size() - 1; i < (int) (s.size() / 2); ++i, --li) {
			if(s[i] != s[li]) {
				if(s[i] == '?' || s[li] == '?') {
					flag = true;
				}
				else {
					trigger = true;
					break;
				}
			}
			else if(s[i] == s[li] && s[i] == '?') {
				phase++;
			}
		}
		if(!flag && !trigger && phase == 0) {
			flag = true;
		} 
		if(trigger) {
			cout << "0\n";
		}
		else if(phase == 0) {
			if(flag) {
				cout << "1\n";
			}
			else {
				cout << "0\n";
			}
		}
		else {
			ans = 1;
			for(int i = 0; i < phase; ++i) {
				ans = (ans * 26) % MOD;
			}
			cout << ans << '\n';
		}
	}
	return 0;
}