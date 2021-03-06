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

int fun(int i) {
	int ans = 0;
	for(int j = 1; j <= i; ++j) {
		ans += __builtin_popcount(j ^ (j - 1));
	}
	return ans;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	for(int i = 1; i <= 100; ++i) {
		
		cout << i << ": " << fun(i) << ' ' << "+" << fun(i) - fun(i - 1) << '\n';
	}
	return 0;
}