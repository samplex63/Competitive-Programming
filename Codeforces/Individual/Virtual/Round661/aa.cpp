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
	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		vector<int> vec(n);
		for(int& x: vec) cin >> x;
		sort(all(vec));
		bool flg = true;
		for(int i = 1; i < n; ++i) {
			if(abs(vec[i - 1] - vec[i]) > 1) {
				flg = false;
				break;
			}
		}
		cout << (flg ? "YES" : "NO") << '\n';
	}
	return 0;
}