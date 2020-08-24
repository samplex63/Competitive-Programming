#include <bits/stdc++.h>
using namespace std;

#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()

using ll = long long;
using ld = long double;

template<class T> bool cmn(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool cmx(T &a, T b) { return a < b ? (a = b, true) : false; }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--) {
		int a, b, q;
		cin >> a >> b >> q;
		vector<int> ha(a * b + 2);
		for(int i = 1; i <= a * b; i++) {
			ha[i] = ha[i - 1] + (i % a % b != i % b % a);
		}
		auto solve = [&](ll val) {
			return 1ll * ha[a * b] * (val / (a * b)) + ha[val % (a * b)];
		};
		while(q--) {
			ll l, r;
			cin >> l >> r;
			cout << solve(r) - solve(l - 1) << ' ';
		}
		cout << '\n';
	}
	return 0;
}