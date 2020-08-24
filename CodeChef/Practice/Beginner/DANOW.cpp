#include <bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "The value of \"" << #x << "\" is " << x << '\n'
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif

	int n, q;
	cin >> n >> q;
	vector<ll> vec1(n), vec2(n), ans(n);
	for(auto &x: vec1) {
		cin >> x;
	}
	for(auto &x: vec2) {
		cin >> x;
	}

	ans[0] = vec1[0] * vec2[0];

	for(int i = 1; i < n; ++i) {
		ans[i] = ans[i - 1] + (vec1[i] * vec2[i]);
	}

	for(int i = 0; i < q; ++i) {
		int l, r;
		cin >> l >> r;
		l--; r--;
		if(l == 0) {
			cout << ans[r];
		} else {
			cout << ans[r] - ans[l - 1];
		}
		cout << '\n';
	}

	return 0;
}