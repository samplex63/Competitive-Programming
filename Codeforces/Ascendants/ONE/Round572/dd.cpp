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
	for(int i = 0; i < n - 1; ++i) {
		int l, r;
		cin >> l >> r;
		l--;
		r--;
		vec[l]++;
		vec[r]++;
	}
	if(any_of(vec.begin(), vec.end(), [](int x) { return x == 2; })) {
		cout << "NO\n";
	} else {
		cout << "YES\n";
	}
	return 0;
}