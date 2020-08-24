#include <bits/stdc++.h>
using namespace std;

#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second

using ll = long long;
using ld = long double;

template<class T> bool cmn(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool cmx(T &a, T b) { return a < b ? (a = b, true) : false; }

bool isPow2(int n) {
	return !(n & (n - 1));
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		if(isPow2(n)) {
			cout << "-1\n";
			continue;
		}
		ll ans = 0;
		for(int i = 1; i <= 31; ++i) {
			int val = 1 << i;
			ans += (n - val) / (val * 2);
		}
		cout << ans << '\n';
	}
	return 0;
}