#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) (int) (x).size()

typedef long long ll;
typedef long double ld;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, q;
	cin >> n >> q;
	vector<int> vec(n);
	for(int i = 0; i < n; ++i) {
		cin >> vec[i];
	}

	auto it = max_element(vec.begin(), vec.end());
	int ind = it - vec.begin();

	vector<pair<int, int>> ans(1, {vec[0], vec[1]});
	deque<int> dq(vec.begin(), vec.end());
	while(dq.front() != *it) {
		int one = dq.front();
		dq.pop_front();
		int two = dq.front();
		dq.pop_front();
		if(one > two) {
			dq.push_front(one);
			dq.push_back(two);
		} else {
			dq.push_front(two);
			dq.push_back(one);
		}
		ans.push_back({dq[0], dq[1]});
	}

	dq.pop_front();

	for(int qq = 0; qq < q; ++qq) {
		ll m;
		cin >> m;
		if(m >= ind + 1) {
			cout << *it << ' ';
			m = (m - ind - 1) % (n - 1);
			cout << dq[m] << '\n';
		} else {
			cout << ans[m - 1].fi << ' ' << ans[m - 1].se << '\n';
		}
	}
	return 0;
}