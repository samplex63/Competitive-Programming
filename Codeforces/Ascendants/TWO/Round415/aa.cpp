#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()

using ll = long long;
using ld = long double;
using vi = vector<int>;
using pii = pair<int, int>;

template<class T> bool cmn(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool cmx(T &a, T b) { return a < b ? (a = b, true) : false; }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k;
	cin >> n >> k;
	ld ans = 0;
	for(int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		ans += x;
	}
	int cnt = 0;
	while(abs(round(ans / (n + cnt)) - k) > 1e-9) {
		ans += k;
		cnt++;
		// cerr << setprecision(10) << fixed << round(ans / (n + cnt)) << '\n';
	}
	cout << cnt << '\n';
	return 0;
}