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
		string inp;
		cin >> inp;
		int cnt = 0, req = ceil(.75 * (double) n), tot_p = count(inp.begin(), inp.end(), 'P');
		bool flag = false;
		if(tot_p >= req) flag = true;
		else {
			for(int i = 2; i < n - 2; ++i) if(inp[i] == 'A') {
				if((inp[i - 2] == 'P' || inp[i - 1] == 'P') && (inp[i + 1] == 'P' || inp[i + 2] == 'P')) {
					cnt++;
				}
				if(tot_p + cnt >= req) {
					flag = true;
					break;
				}
			}	
		}
		cout << (flag? cnt: -1) << '\n';
	}
	return 0;
}