#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;
	cin >> n >> k;
	map<int, int> m;
	for(int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		m[x]++;
	}

	vector<int> d;
	for(auto x: m) {
		d.push_back(x.second);
	}

	sort(d.rbegin(), d.rend());

	int num = ceil((double) n / 2), curr = 0;
	// cerr << num;
	int ans = 0;
	while(num > 0) {
		int s = d[curr] / 2;
		num -= s;
		s *= 2;
		ans += s;
		d[curr++] -= s;
		if(curr == (int) d.size()) break;
	}
	// for(int i = 0; i < d.size(); ++i) cerr << d[i] << ' ';

	ans += min(count(d.begin(), d.end(), 1), num);
	cout << ans << '\n';

	return 0;
}