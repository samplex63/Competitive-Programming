#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int) (x).size()

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
		bool flag = true;
		for(int i = 1; i < sz(s); ++i) {
			if(s[i] < s[i - 1]) {
				s.erase(s.begin() + i - 1);
				flag = false;
				break;
			}
		}
		if(flag) s.pop_back();
		cout << stoll(s) << '\n';
	}
	return 0;
}