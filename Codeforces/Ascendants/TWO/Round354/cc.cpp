#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

template<class T> bool uin(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool uax(T &a, T b) { return a < b ? (a = b, true) : false; }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	int ans = 1;
	for(char comp = 'a'; comp <= 'b'; ++comp) {
		int l = 0, r = 0;
		int ks = k;
		while(r < n) {
			while(r < n) {
				if(s[r] == comp) {
					if(ks == 0) break;
					ks--;
				}
				uax(ans, r - l + 1);
				r++;
			}
			if(s[l] == comp) ks++;
			l++;
		}
	}
	cout << ans << '\n';
	return 0;
}