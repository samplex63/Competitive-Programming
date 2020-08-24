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
		int n;
		cin >> n;
		vector<int> vec(n);
		for(int i = 0; i < n; ++i) cin >> vec[i];
		int ap = 0, bp = n - 1;
		ll at = 0, bt = 0;
		ll aans = 0, bans = 0;
		int cnt = 0;
		int flag = 1;
		while(ap <= bp) {
			if(flag) {
				at = 0;
				while(ap <= bp && at <= bt) {
					at += vec[ap++];
				}
				aans += at;
			} else {
				bt = 0;
				while(ap <= bp && at >= bt) {
					bt += vec[bp--];
				}
				bans += bt;
			}
			cnt++;
			flag ^= 1;
		}
		// cerr << ap << ' ' << bp << '\n';
		cout << cnt << ' ' << aans << ' ' << bans << '\n';
	}
	return 0;
}