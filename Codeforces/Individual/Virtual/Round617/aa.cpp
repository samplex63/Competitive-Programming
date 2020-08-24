#include <bits/stdc++.h>
using namespace std;

#define sz(x) static_cast<int>((x).size())

using ll = long long;
using ld = long double;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		vector<int> vec(n);
		int odd = 0, even = 0;
		for(int i = 0; i < n; ++i) {
			int x;
			cin >> x;
			(x & 1) ? odd++ : even++;
		}
		bool flag = true;
		if(n % 2 == 0 && even == 0) {
			flag = false;
		}
		flag &= (odd > 0);
		cout << (flag ? "YES" : "NO") << '\n';
	}
	return 0;
}