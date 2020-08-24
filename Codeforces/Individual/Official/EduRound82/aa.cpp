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
		string s;
		cin >> s;
		int ans = 0;
		for(int i = 0; i < sz(s); ++i) {
			if(s[i] == '1') {
				for(int j = i + 1; j < sz(s); ++j) {
					if(s[j] == '0') ans++;
				}
				break;
			}
		}
		while(ans > 0 && s.back() == '0') {
			ans--;
			s.pop_back();
		}
		cout << ans << '\n';
	}
	return 0;
}