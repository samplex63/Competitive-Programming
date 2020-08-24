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
	int n, d;
	cin >> n >> d;
	vector<int> vec(n);
	for(int& x: vec) cin >> x;
	sort(all(vec));
	int ans = 0;
	for(int i = 0; i < n; ++i) {
		for(int j = i; j < n; ++j) {
			if(vec[j] - vec[i] <= d) {
				uax(ans, j - i + 1);
			}
		}
	}
	cout << n - ans << '\n';
	return 0;
}