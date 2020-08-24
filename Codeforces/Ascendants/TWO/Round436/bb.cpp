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
	cin >> n;
	string s;
	cin >> s;
	set<char> st;
	int ans = 0;
	for(int i = 0; i < n; ++i) {
		if(isupper(s[i])) {
			cmx(ans, sz(st));
			st.clear();
		} else {
			st.insert(s[i]);
		}
	}
	cmx(ans, sz(st));
	cout << ans << '\n';
	return 0;
}