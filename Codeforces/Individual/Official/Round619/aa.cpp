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
		string a, b, c;
		cin >> a >> b >> c;
		bool flag = true;
		for (int i = 0; i < sz(a); ++i) {
			if (c[i] != b[i] && c[i] != a[i]) {
				flag = false;
				break;
			}
			if (a[i] != b[i]) {
				if (a[i] != c[i] && b[i] != c[i]) {
					flag = false;
					break;
				}
			}
		}
		cout << (flag? "YES\n" : "NO\n");
	}
	return 0;
}