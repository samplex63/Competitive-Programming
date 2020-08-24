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
	int n, p;
	cin >> n >> p;
	ll ans = p / 2;
	ll cur = 1;
	vector<string> vec(n);
	for(int i = 0; i < n; ++i) {
		cin >> vec[i];
	}
	for(int i = n - 2; i >= 0; --i) {
		if(vec[i].back() == 's') {
			cur = cur * 2 + 1;
		} else {
			cur *= 2;
		}
		ans += cur * p / 2;
	}
	cout << ans << '\n';
	return 0;
}