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
	char a, b;
	cin >> a >> b;
	int n;
	cin >> n;
	if(n & 1) {
		string ans = "cw";
		n %= 4;
		string m = "^>v<";
		int d1 = m.find(a), d2 = m.find(b);
		if((d1 - d2 + 4) % 4 == n) {
			ans = "c" + ans;
		}
		cout << ans << '\n';
	} else {
		cout << "undefined\n";
	}
	return 0;
}