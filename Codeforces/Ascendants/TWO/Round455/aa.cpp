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
	string on, tw;
	cin >> on >> tw;
	string ans;
	ans += on[0];
	int cp = 1;
	while(cp < sz(on) && on[cp] < tw[0]) ans += on[cp], cp++;
	cout << ans + tw[0] << '\n';
	return 0;
}