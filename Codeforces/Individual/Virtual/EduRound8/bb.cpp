#include <bits/stdc++.h>
using namespace std;

#define sz(x) static_cast<int>((x).size())

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

template<class T> bool cmn(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool cmx(T &a, T b) { return a < b ? (a = b, true) : false; }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string inp;
	cin >> inp;
	ll ans = 0;
	for(int i = 0; i < sz(inp); ++i) {
		ans += (inp[i] == '4' || inp[i] == '8' || inp[i] == '0');
	}
	for(int i = 0; i < sz(inp) - 1; ++i) {
		if(int cur = stoi(inp.substr(i, 2)); cur % 4 == 0) {
			ans += i + 1;
		}
	}
	cout << ans << '\n';
	return 0;
}