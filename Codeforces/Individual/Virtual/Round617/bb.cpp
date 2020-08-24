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
		int sub = n;
		while(sub >= 10) {
			int temp = sub / 10;
			n += temp;
			sub %= 10;
			sub += temp;
		}
		cout << n << '\n';
	}
	return 0;
}