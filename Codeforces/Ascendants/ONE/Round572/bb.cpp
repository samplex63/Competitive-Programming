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
	sort(vec.begin(), vec.end());

	vector<int> ans(n);
	int i1 = 0, i2 = n - 1;
	for(int i = 0; i < n; i += 2) {
		ans[i1++] = vec[i];
		ans[i2--] = vec[i + 1];
	}
	if(n & 1) {
		ans[n / 2] = vec[n - 1];
	}
	if(vec[n - 1] < (vec[n - 2] + vec[n - 3])) {
		cout << "YES\n";
		for(int i = 0; i < n; ++i) {
			cout << ans[i] << ' ';
		}
		cout << '\n';
	} else {
		cout << "NO\n";
	}
	return 0;
}