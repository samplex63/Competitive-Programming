#include <bits/stdc++.h>
using namespace std;

#define sz(x) static_cast<int>((x).size())

using ll = long long;
using ld = long double;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, p, q;
	string s;
	cin >> n >> p >> q >> s;
	int val1 = -1, val2 = -1;
	for(int i = 0; i < n; ++i) {
		int sub = n - i * p;
		if(sub < 0) break;
		if(sub % q == 0) {
			val1 = i;
			val2 = sub / q;
			break;
		}
	}
	if(val1 == -1) {
		cout << val1 << '\n';
		return 0;
	}
	cout << val1 + val2 << '\n';
	for(int i = 0; i < val1; ++i) {
		cout << s.substr(p * i, p) << '\n';
	}
	for(int i = 0; i < val2; ++i) {
		cout << s.substr(p * val1 + q * i, q) << '\n';
	}
	return 0;
}