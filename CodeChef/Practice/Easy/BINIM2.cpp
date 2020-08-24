#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		string s;
		cin >> n >> s;
		vector<string> vec(n);
		int c0 = 0, c1 = 0;
		for(auto& x: vec) {
			cin >> x;
			x.erase(unique(x.begin(), x.end()), x.end());
			for(auto y: x) {
				(y == '0')? c0++: c1++;
			}
		}
		bool flag = 1;
		if(s.back() == 'm') flag = 0;
		if(flag && c0 > c1) {
			flag = 0;
		} else if(!flag && c1 > c0) {
			flag = 1;
		}
		cout << (flag? "Dee": "Dum") << '\n';
	}
	return 0;
}