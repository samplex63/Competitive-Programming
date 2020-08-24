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
	ll n, m, p;
	cin >> n >> m >> p;
	vector<int> vec1(n), vec2(m);
	for(int i = 0; i < n; ++i) {
		cin >> vec1[i];
	}
	for(int i = 0; i < m; ++i) {
		cin >> vec2[i];
	}
	ll i1, i2;
	for(int i = 0; i < n; ++i) {
		if(vec1[i] % p != 0) {
			i1 = i;
			break;
		}
	}
	for(int i = 0; i < m; ++i) {
		if(vec2[i] % p != 0) {
			i2 = i;
			break;
		}
	}

	cout << i1 + i2 << '\n';
	return 0;
}