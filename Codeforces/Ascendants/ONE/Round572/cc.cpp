#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int) (x).size()

typedef long long ll;
typedef long double ld;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<int> vec(n);
	for(int i = 0; i < n; ++i) {
		cin >> vec[i];
	}
	vector<int> m(n + 1);
	m[0] = 0;
	for(int i = 1; i < n + 1; ++i) {
		m[i] = m[i - 1] + vec[i - 1];
	}
	int q;
	cin >> q;
	for(int qq = 0; qq < q; ++qq) {
		int l, r;
		cin >> l >> r;
		int ans = m[r] - m[l - 1];
		cout << ans / 10 << '\n';
	}
	return 0;
}