#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) (int) (x).size()

typedef long long ll;
typedef long double ld;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	cin >> n >> m;
	vector<int> vec(n);
	for(int i = 0; i < n; ++i) {
		cin >> vec[i];
	}
	sort(vec.begin(), vec.end());
	for(int i = 0; i < m; ++i) {
		int x;
		cin >> x;
		cout << upper_bound(vec.begin(), vec.end(), x) - vec.begin() << ' ';
	}
	cout << '\n';
	return 0;
}