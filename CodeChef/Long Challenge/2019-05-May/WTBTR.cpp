#include <bits/stdc++.h>
using namespace std;

#define DEBUG(x) cerr << (#x) << " = " << (x) << '\n'
typedef long long ll;

ll top, bottom;

bool comparePositive(pair<ll, ll> a, pair<ll, ll> b) {
	return a.first + top - a.second < b.first + top -  b.second;
}

bool compareNegative(pair<ll, ll> a, pair<ll, ll> b) {
	return a.first + a.second + bottom < b.first + b.second + bottom;
}

double dist1(pair<ll, ll> a, pair<ll, ll> b) {
	double x = abs(a.second - a.first - b.second + b.first) * 1.0;
	return x / 2;
}

double dist2(pair<ll, ll> a, pair<ll, ll> b) {
	double x = abs(a.first + a.second - b.first - b.second) * 1.0;
	return x / 2;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif

	int tt;
	cin >> tt;
	cout << fixed << setprecision(10);
	while(tt--) {
		bottom = top = numeric_limits<ll>::min();
		int n;
		cin >> n;
		vector<pair<ll, ll>> vec(n);

		for(auto &x: vec) {
			cin >> x.first >> x.second;
			top = max(top, x.second - x.first);
			bottom = max(bottom, -x.first - x.second);
		}
		double ans = numeric_limits<double>::max();

		sort(vec.begin(), vec.end(), comparePositive);
		for(int i = 0; i < n - 1; ++i) {
			ans = min(ans, dist1(vec[i], vec[i + 1]));
		}

		sort(vec.begin(), vec.end(), compareNegative);
		for(int i = 0; i < n - 1; ++i) {
			ans = min(ans, dist2(vec[i], vec[i + 1]));
		}

		cout << ans << '\n';
	}
	return 0;
}