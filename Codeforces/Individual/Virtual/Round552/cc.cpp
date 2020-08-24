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
	int a, b, c;
	cin >> a >> b >> c;
	vector<int> days{0, 0, 1, 2, 0, 2, 1};
	int weeks = min({a / 3, b / 2, c / 2});
	a -= weeks * 3;
	b -= weeks * 2;
	c -= weeks * 2;
	int cur_days = weeks * 7;
	int fans = cur_days;
	// cerr << a << ' ' << b << ' ' << c << '\n';
	for(int i = 0; i < 7; ++i) {
		int as = a, bs = b, cs = c, st = i;
		int tot = cur_days;
		while(1) {
			if(days[st] == 0) {
				if(as == 0) {
					break;
				}
				as--;
			} else if(days[st] == 1) {
				if(bs == 0) {
					break;
				}
				bs--;
			} else {
				if(cs == 0) break;
				cs--;
			}
			st = (st + 1) % 7;
			tot++;
		}

		cmx(fans, tot);
	}
	cout << fans << '\n';
	return 0;
}