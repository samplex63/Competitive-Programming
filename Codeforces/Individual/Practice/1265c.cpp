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
	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		vector<int> vec(n);
		map<int, int> m;
		for(int i = 0; i < n; ++i) {
			int x;
			cin >> x;
			m[x]++;
		}
		int g = 0, s = 0, b = 0;
		g = m.rbegin()->second;
		auto it = next(m.rbegin());

		for(; it != m.rend() && s <= g; ++it) {
			s += it->second;
		}
		for(; it != m.rend(); ++it) {
			if(b + it->second + g + s > n / 2) break;
			b += it->second;
		}
		if(g + b + s > n / 2 || g >= b || g >= s) {
			g = b = s = 0;
		}
		cout << g << ' ' << s << ' ' << b << '\n';
	}
	return 0;
}