#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())

typedef long long ll;
typedef long double ld;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--) {
		string s;
		cin >> s;
		int sum = 0;
		int zero = 0, even = 0;
		for(int i = 0; i < sz(s); ++i) {
			sum += (s[i] - '0');
			if(s[i] == '0') {
				zero++;
				// continue;
			}
			if((s[i] - '0') % 2 == 0) even++;
		}
		
		cout << ((zero > 0 && sum % 3 == 0 && (even > 1 || sz(s) == 1)) ? "red" : "cyan") << '\n';
	}
	return 0;
}