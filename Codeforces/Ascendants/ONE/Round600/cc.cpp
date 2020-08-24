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

	#ifdef LOCAL
	freopen("in", "r", stdin);
	#endif
	int n, m;
	cin >> n >> m;
	vector<ll> vec(n), ok(n);
	for(int i = 0; i < n; ++i) cin >> vec[i];
	sort(vec.begin(), vec.end());
	for(int i = 0; i < n; ++i) {
		for(int j = i; j < i + m && j < n; ++j) {
			ok[i] += vec[j];
		}
	}
	for(auto x: ok) cerr << x << ' ';
	for(int mm = 0; mm < m - 1; ++mm) {
		for(int i = m; i < n; i += m) {
			ok[i] += ok[i - m];
		}
	}
	//~ for(auto x: ok) cerr << x << ' ';
	return 0;
}