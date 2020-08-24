#include <bits/stdc++.h>
using namespace std;

#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()

using ll = long long;
using ld = long double;

template<class T> bool cmn(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool cmx(T &a, T b) { return a < b ? (a = b, true) : false; }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--) {
		string s;
		cin >> s;
		cout << sz(s) - count(all(s), '0') << '\n';
		for(int i = 0; i < sz(s); ++i) {
			if(s[i] == '0') continue;
			cout << s[i] << string(sz(s) - i - 1, '0') << ' ';
		}
		cout << '\n';
	}
	return 0;
}