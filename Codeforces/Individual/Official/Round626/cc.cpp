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
	int n;
	cin >> n;
	string inp;
	cin >> inp;
	if(count(all(inp), '(') != count(all(inp), ')')) {
		cout << -1;
		return 0;
	}
	int cnt = 0, ans = 0;
	int st = 0;
	bool flag = false;
	for(int i = 0; i < n; ++i) {
		cnt += inp[i] == '(' ? 1 : -1;
		if(cnt < 0 && !flag) {
			flag = true;
			st = i;
		} else if(cnt > 0) {
			flag = false;
		}
		if(cnt == 0 && flag) {
			ans += i - st + 1;
			flag = false;
		}
	}
	cout << ans << '\n';
	return 0;
}