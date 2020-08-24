#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())

typedef long long ll;
typedef long double ld;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifdef LOCAL
	freopen("in", "r", stdin);
	#endif
	const int MAXN = (int) 1e6 + 10;
	bitset<MAXN> bs, visited;
	bs.reset();
	visited.reset();
	int n;
	cin >> n;
	vector<int> vec(n), ans;
	int cnt = 0;
	bool flag = true;
	for(int i = 0; i < n; ++i) cin >> vec[i];
	for(int i = 0; i < n; ++i) {
		if(vec[i] > 0) {
			if(!bs[vec[i]]) {
				bs[vec[i]] = true;
				if(!visited[vec[i]]) {
					visited[vec[i]] = true;
				} else {
					if(cnt != 0) {
						flag = false;
						break;
					}
				}
				cnt++;
			} else {
				flag = false;
				break;
			}
		} else {
			if(bs[-vec[i]]) {
				bs[-vec[i]] = false;
				cnt--;
				if(cnt == 0) {
					ans.push_back(i + 1);
					visited.reset();
				}
			} else {
				flag = false;
				break;
			}
		}
	}
	if(flag && cnt == 0) {
		//~ ans.push_back(n);
		cout << sz(ans) << '\n';
		cout << ans[0];
		for(int i = 1; i < sz(ans); ++i) {
			cout << ' ' << ans[i] - ans[i - 1];
		}
	} else {
		cout << "-1\n";
	}
	return 0;
}