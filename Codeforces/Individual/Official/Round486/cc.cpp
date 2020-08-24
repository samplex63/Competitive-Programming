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
	int k;
	cin >> k;
	map<ll, pii> m;
	for(int it = 1; it <= k; it++) {
		int n;
		cin >> n;
		vector<int> vec(n);
		for(int i = 0; i < n; ++i) {
			cin >> vec[i];
		}
		ll sum = accumulate(all(vec), 0ll);
		for(int i = 0; i < n; ++i) {
			ll val = sum - vec[i];
			if(!m.count(val)) {
				m[val] = {it, i + 1};
			} else {
				if(m[val].first != it) {
					cout << "YES\n";
					cout << m[val].first << ' ' << m[val].second << '\n';
					cout << it << ' ' << i + 1 << '\n';
					return 0;
				}
			}
		}
	}
	cout << "NO\n";
	return 0;
}