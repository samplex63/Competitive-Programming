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
	int n, k;
	cin >> n >> k;
	map<int, int> m;
	for(int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		m[x] = i + 1;
	}
	if(sz(m) >= k) {
		cout << "YES\n";
		int cnt = 0;
		for(auto x: m) {
			cout << x.second << ' ';
			cnt++;
			if(cnt == k) break;
		}
	} else {
		cout << "NO\n";
	}
	return 0;
}