#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())

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
	sort(vec.rbegin(), vec.rend());
	int ans = 0;
	for(int i = 0; i < n; ++i) {
		m -= vec[i];
		ans++;
		if(m <= 0) break;
	}
	cout << ans << '\n';
	return 0;
}