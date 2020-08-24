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
	map<int, int> mp;
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	mp[0] = a;
	mp[1] = b;
	mp[2] = c;
	mp[3] = d;
	for(int cur = 0; cur < 4; ++cur) {
		if(mp[cur] > 0) {
			vector<int> ans{cur};
			map<int, int> sub_mp = mp;
			sub_mp[cur]--;
			int sum = a + b + c + d;
			for(int i = 1; i < sum; ++i) {
				if(sub_mp[ans.back() - 1] > 0) {
					sub_mp[ans.back() - 1]--;
					ans.push_back(ans.back() - 1);
				} else if(sub_mp[ans.back() + 1] > 0) {
					sub_mp[ans.back() + 1]--;
					ans.push_back(ans.back() + 1);
				} else {
					break;
				}
			}
			if(sz(ans) == sum) {
				// cerr << cur << '\n';
				cout << "YES\n";
				for(int i = 0; i < sum; ++i) {
					cout << ans[i] << ' ';
				}
				cout << '\n';
				return 0;
			}
		}
	}
	cout << "NO\n";
	return 0;
}