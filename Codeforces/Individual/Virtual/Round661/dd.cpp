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
		string inp;
		cin >> inp;
		vector<set<int>> ss(2);
		vector<int> ans(n);
		int maxe = 0;
		for(int i = 0; i < n; i++) {
			int val = inp[i] - '0';
			if(sz(ss[!val]) == 0) {
				ss[!val].insert(++maxe);
			}
			int num = *ss[!val].begin();
			ss[val].insert(num);
			ans[i] = num;
			ss[!val].erase(num);
			// cerr << i << '\n';
		}
		cout << maxe << '\n';
		for(int i = 0; i < n; ++i) cout << ans[i] << ' ';
		cout << '\n';
	}
	return 0;
}