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
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<int> vec(n);
		for(int i = 0; i < n; ++i) cin >> vec[i];
		vector<bool> che(n + 10, false);
		che[vec[0]] = true;
		vector<int> ans = {vec[0]};
		int curr = 1;
		bool flag = true;
		for(int i = 1; i < n; ++i) {
			if(vec[i] == vec[i - 1]) {
				while(che[curr]) curr++;
				if(curr > vec[i]) {
					flag = false;
					break;
				}
				ans.push_back(curr);
				che[curr] = true;
			} else {
				ans.push_back(vec[i]);
				che[vec[i]] = true;
			}
		}
		if(flag) {
			for(auto x: ans) cout << x << ' ';
			cout << '\n';
		} else {
			cout << "-1\n";
		}
	}

	return 0;
}