#include <bits/stdc++.h>
using namespace std;

#define sz(x) static_cast<int>((x).size())

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

template<class T> bool cmn(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool cmx(T &a, T b) { return a < b ? (a = b, true) : false; }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b;
	cin >> a >> b;
	vector<int> vec{6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
	int ans = 0;
	for(int i = a; i <= b; ++i) {
		int sub = i;
		while(sub > 0) {
			ans += vec[sub % 10];
			sub /= 10;
		}
	}
	cout << ans << '\n';
	return 0;
}