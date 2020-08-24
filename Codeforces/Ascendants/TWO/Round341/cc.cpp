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
	int n, p;
	cin >> n >> p;
	vector<pii> vec(n);
	for(int i = 0; i < n; ++i) {
		int x, y;
		cin >> x >> y;
		vec[i].fi = y - x + 1;
		int val1 = y / p;
		int val2 = (x - 1) / p;
		vec[i].se = val1 - val2;
		// cerr << vec[i].fi << ' ' << vec[i].se << '\n';
	}
	double ans = 0.0;
	for(int i = 0; i < n; ++i) {
		int ne = (i + 1) % n;
		double fail = double(vec[i].fi - vec[i].se) / vec[i].fi;
		double failn = double(vec[ne].fi - vec[ne].se) / vec[ne].fi;
		// cerr << setprecision(12) << fixed << fail << ' ' << failn << '\n';
		double sucess = 1 - fail * failn;
		sucess *= 2000;
		ans += sucess;
	}
	cout << setprecision(12) << fixed << ans << '\n';
	return 0;
}