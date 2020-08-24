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
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int ans = -1;
	bitset<int(1e8)> bs;
	for(int i = d; i < int(1e8); i += c) {
		bs[i] = true;
	}
	for(int i = b; i < int(1e8); i += a) {
		if(bs[i]) {
			ans = i;
			break;
		}
	}
	cout << ans << '\n';
	return 0;
}