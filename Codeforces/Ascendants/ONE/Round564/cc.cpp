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
	vector<int> va(n), vb(n);
	for(int i = 0; i < n; ++i) {
		cin >> va[i];
	}
	for(int i = 0; i < n; ++i) {
		cin >> vb[i];
	}
	auto it = find(vb.begin(), vb.end(), 1);
	int ans = 0;
	if(it == vb.end()) {
		int max_hold = 0;
		for(int i = 0; i < n; ++i) if(vb[i] != 0) {
			max_hold = max(max_hold, i - vb[i] + 2);
		}
		cerr << "A->Max_hold: " << max_hold << '\n';
		ans += max_hold;
		ans += n;
	} else {
		int cnt = 1;
		bool flag = true;
		for(int i = it - vb.begin(); i < n; ++i) {
			flag &= (cnt++ == vb[i]);
		}
		cerr << 1 << '\n';
		if(flag) {
			bool flag2 = true;
			cnt--;
			cerr << cnt << '\n';
			for(int i = 0; i < it - vb.begin(); ++i) if(vb[i] != 0) {
				flag2 &= (vb[i] - cnt - 2 - i) >= 0;
			}
			if(flag2) {
				cerr << "KOKOK: " << 2 << '\n';
				ans = -1;
			} else {
				ans = n;
			}
		} else {
			ans = n;
		}
		int max_hold = 0;
		for(int i = it - vb.begin() + 1; i < n; ++i) if(vb[i] != 0) {
			max_hold = max(max_hold, i - (it - vb.begin()) - vb[i] + 1);
		}
		cerr << "B->Max_hold: " << max_hold << '\n';
		ans += max_hold;
		cerr << ans << '\n';
		ans += (it - vb.begin()) + 1;
	}
	cout << ans << '\n';
	return 0;
}