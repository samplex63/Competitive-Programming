#include <bits/stdc++.h>
using namespace std;

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
	int n;
	cin >> n;
	vector<int> vec(n), ans(n);
	for(int i = 0; i < n; ++i) {
		cin >> vec[i];
	}
	ans[0] = vec[0];
	int cur_max = ans[0];
	for(int i = 1; i < n; ++i) {
		ans[i] = max(ans[i - 1], cur_max) + vec[i];
		cmx(cur_max, ans[i]);
	}
	for(int i = 0; i < n; ++i) {
		cout << ans[i] << ' ';
	}
	cout << '\n';
	return 0;
}