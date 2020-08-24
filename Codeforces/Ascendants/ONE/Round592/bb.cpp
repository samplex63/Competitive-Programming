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
		int n;
		cin >> n;
		string s;
		cin >> s;
		int min_pos1 = INT_MAX, min_pos2 = INT_MAX;
		for(int i = 0; i < n; ++i) {
			if(s[i] == '1') {
				min_pos1 = i;
				break;
			}
		}
		for(int i = n - 1; i >= 0; --i) {
			if(s[i] == '1') {
				min_pos2 = n - i - 1;
				break;
			}
		}
		if(min_pos1 == INT_MAX) {
			cout << n << '\n';
		} else {
			cout << (2 * (n - min(min_pos1, min_pos2))) << '\n';
		}
	}
	return 0;
}