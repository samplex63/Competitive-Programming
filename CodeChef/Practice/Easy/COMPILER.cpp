#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		string inp;
		cin >> inp;
		int ans = 0;
		if(inp.front() == '>') {
			cout << ans << '\n';
			continue;
		}
		int less_cnt = 0, more_cnt = 0;
		for(int i = 0; i < (int) inp.size(); ++i) {
			if(inp[i] == '<') {
				less_cnt++;
			}
			else {
				more_cnt++;
			}
			if(less_cnt == more_cnt) {
				ans = i + 1;
				if(ans != inp.size()) {
					if(inp[i + 1] == '>') {
						break;
					}
				}
			}
		}
		cout << ans << '\n';
	}
	return 0;
}