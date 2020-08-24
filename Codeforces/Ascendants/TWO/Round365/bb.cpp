#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

template<class T> bool uin(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool uax(T &a, T b) { return a < b ? (a = b, true) : false; }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k;
	cin >> n >> k;
	vector<int> vec(n);
	for(int& x: vec) cin >> x;
	ll sum = accumulate(all(vec), 0ll);
	ll ans = 0;
	vector<int> ind(k);
	for(int i = 0; i < k; ++i) {
		cin >> ind[i];
		ind[i]--;
		sum -= vec[ind[i]];
		ans += sum * vec[ind[i]];
	}
	for(int i = 0; i < n; ++i) {
		int ne = (i + 1) % n;
		if(binary_search(all(ind), i) || binary_search(all(ind), ne)) {
			continue;
		}
		ans += vec[i] * vec[ne];
	}
	cout << ans << '\n';
	return 0;
}