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
		int n;
		cin >> n;
		string s;
		cin >> s;
		string ans_s = s;
		int ans = 1;
		for(int i = 2; i <= n; ++i) {
			string one = s.substr(0, i - 1), two = s.substr(i - 1);
			if((n + i) % 2 == 0) reverse(one.begin(), one.end());
			string mini = two + one;
			if(mini < ans_s) {
				ans = i;
				ans_s = mini;
			}
		}
		cout << ans_s << '\n' << ans << endl;
	}
	return 0;
}