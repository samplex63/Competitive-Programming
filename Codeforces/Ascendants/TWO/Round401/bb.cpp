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
	string inp1, inp2;
	cin >> n >> inp1 >> inp2;
	multiset<char> ms(all(inp2));
	int ans = 0;
	for(int i = 0; i < n; ++i) {
		auto it = ms.lower_bound(inp1[i]);
		if(it != ms.end()) {
			ms.erase(it);
		} else {
			ans++;
			ms.erase(ms.begin());
		}
	}
	cout << ans << '\n';
	ans = 0;
	ms = multiset<char>(all(inp2));
	for(int i = 0; i < n; ++i) {
		auto it = ms.upper_bound(inp1[i]);
		if(it != ms.end()) {
			ans++;
			ms.erase(it);
		} else {
			ms.erase(ms.begin());
		}
	}
	cout << ans << '\n';
	return 0;
}