#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())

using ll = long long;
using ld = long double;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--) {
		vector<int> vec(3);
		cin >> vec[0] >> vec[1] >> vec[2];
		if(vec[0] == 2 && vec[1] == 2 & vec[2] == 2) {
			cout << 4 << '\n';
			continue;
		}
		sort(vec.begin(), vec.end());
		int ans = 7;
		int ter = vec[0];

		if(ter == 3) ans--;
		else if(ter == 2) ans -= 2;
		else if(ter == 1) ans -= 3;
		else if(ter == 0) ans -= 4;
		else {
			cout << 7 << '\n';
			continue;
		}

		ter = vec[1];
		if(ter == 1) ans--;
		else if(ter == 0) ans -= 2;

		if(vec[2] == 0) ans--;
		cout << ans << '\n';
	}
	return 0;
}