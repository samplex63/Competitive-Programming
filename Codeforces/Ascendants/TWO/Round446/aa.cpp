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
	int n;
	cin >> n;
	vector<int> o(n), t(n);
	for(int& x: o) cin >> x;
	for(int& x: t) cin >> x;
	sort(all(t));
	ll val = accumulate(all(o), 0ll);
	if(t[n - 1] + t[n - 2] >= val) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
	return 0;
}