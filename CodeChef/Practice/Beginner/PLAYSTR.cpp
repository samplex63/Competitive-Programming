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
		string a, b;
		cin >> a >> b;
		cout << ((count(a.begin(), a.end(), '1') == count(b.begin(), b.end(), '1'))? "YES\n": "NO\n");
	}
	return 0;
}