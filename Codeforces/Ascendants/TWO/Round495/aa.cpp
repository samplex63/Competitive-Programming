#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

template<class T> bool cmn(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool cmx(T &a, T b) { return a < b ? (a = b, true) : false; }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, d;
	cin >> n >> d;
	int ans = 2;
	vector<int> vec(n);
	for(int& x: vec) cin >> x;
	for(int i = 1; i < n; ++i) {
		ans += (vec[i] - vec[i - 1] > d * 2) + (vec[i] - vec[i - 1] == d * 2);
	}
	cout << ans << '\n';
	return 0;
}