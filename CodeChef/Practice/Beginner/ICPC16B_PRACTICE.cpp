#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		vector<int> vec(n);
		for(int &x: vec) cin >> x;

		int cntm1 = 0, cnt = 0, cnt1 = 0, cnt0 = 0;

		bool flag = true;
		for(int i = 0; i < n; ++i) {
			if(vec[i] == -1) {
				cntm1++;
			} else if(vec[i] == 1) {
				cnt1++;
			} else if(vec[i] == 0) {
				cnt0++;
			} else {
				cnt++;
			}
		}
		if(cnt > 1) {
			flag = false;
		}
		if(cnt == 1 && cntm1 > 0) {
			flag = false;
		}
		if(cntm1 > 1 && cnt1 == 0) {
			flag = false;
		}
		cout << (flag? "yes\n": "no\n");
	}
	return 0;
}