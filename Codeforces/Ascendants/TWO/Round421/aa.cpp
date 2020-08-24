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
	int c, st, ed, d, l;
	cin >> c >> st >> ed >> d >> l;
	int go = 0, days = 0;
	while(go < c) {
		go += min(st + days * d, ed);
		days++;
		if(go >= c) {
			break;
		}
		go -= l;
		go = max(0, go);
	}
	cout << days << '\n';
	return 0;
}