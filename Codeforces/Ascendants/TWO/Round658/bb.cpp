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
		int n, k, l;
		cin >> n >> k >> l;
		vector<int> vec(n + 1, -k - 2);
		for(int& x: vec) cin >> x;
		set<tuple<int, int, bool>> seet;
		bool final = false;
		function<bool(int, int, bool)> go = [&](int st, int pos, bool fl) {
			if(pos >= n) final = true;
			if(final) return true;
			if(seet.count({st, pos, fl})) return false;
			seet.insert({st, pos, fl});
			// cerr << st << ' ' << pos << ' ' << fl << '\n';
			st += fl ? 1 : -1;
			if(st == k) fl = false;
			if(st == 0) fl = true;
			if(vec[pos] + st <= l && go(st, pos, fl)) return true;
			if(vec[pos + 1] + st <= l && go(st, pos + 1, fl)) return true;
			return false;
		};
		vector<int> chk(2 * k);
		for(int i = 0; i <= k; ++i) {
			chk[i] = i;
		}
		for(int i = k + 1; i < 2 * k; ++i) {
			chk[i] = chk[i - 1] - 1;
		}
		for(int i = 0; i < 2 * k; ++i) {
			if(vec[0] + chk[i] <= l) {
				cerr << chk[i] << ' ' << i << '\n';
				go(chk[i], 0, i < k);
			}
		}
		if(final) cout << "Yes\n";
		else cout << "No\n";
	}
	return 0;
}