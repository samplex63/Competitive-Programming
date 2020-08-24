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
	int tt;
	cin >> tt;
	while(tt--) {
		string s;
		cin >> s;
		int n = sz(s);
		s += " ";
		s = " " + s;
		for(int i = 1; i <= n; ++i) {
			if(s[i] == '?') {
				s[i] = 'a';
				while(s[i] == s[i - 1] || s[i] == s[i + 1]) {
					s[i]++;
					if(s[i] > 'c') s[i] = 'a';
				}
			}
		}
		s.pop_back();
		s.erase(s.begin());
		bool flag = true;
		for(int i = 1; i < n; ++i) {
			if(s[i - 1] == s[i]) {
				flag = false;
				break;
			}
		}
		if(flag) cout << s << '\n';
		else cout << "-1\n";
	}
	return 0;
}