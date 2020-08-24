#include <bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "The value of " << #x << " is " << x << endl

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		vector<int> attack_vec(n);
		vector<int> defence_vec(n);
		for(auto &x: attack_vec) {
			cin >> x;
		}
		for(auto &x: defence_vec) {
			cin >> x;
		}
		bool a[n];
		int val = defence_vec[0] - (attack_vec[1] + attack_vec[n - 1]);
		if(val <= 0) {
			a[0] = false;
		} else {
			a[0] = true;
		}
		val = defence_vec[n - 1] - (attack_vec[n - 2] + attack_vec[0]);
		if(val <= 0) {
			a[n - 1] = false;
		} else {
			a[n - 1] = true;
		}
		for(int i = 1; i < n - 1; ++i) {
			val = defence_vec[i] - (attack_vec[i - 1] + attack_vec[i + 1]);
			if(val <= 0) {
				a[i] = false;
			} else {
				a[i] = true;
			}
		}
		int ans = INT_MIN;
		for(int i = 0; i < n; ++i) {
			if(a[i]) {
				ans = max(ans, defence_vec[i]);
			}
		}
		if(ans == INT_MIN) {
			cout << "-1\n";
		} else {
			cout << ans << '\n';
		}
	}
	return 0;
}