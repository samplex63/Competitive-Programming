#include <bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "The value of \"" << #x << "\" is " << x << '\n'

bool compare(pair<int, int> a, pair<int, int> b) {
	if(a.first == b.first) {
		return a.second > b.second;
	}
	return a.first < b.first;
}

double distanceBetn2Points(pair<int, int> a, pair<int, int> b) {
	return sqrt(pow(b.first - a.first, 2) + pow(b.second - a.second, 2) * (double) 1);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif

	cout << fixed << setprecision(2);

	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		vector< pair< int, int > > vec(n);
		for(int i = 0; i < vec.size(); ++i) {
			cin >> vec[i].first >> vec[i].second;
		}
		sort(vec.begin(), vec.end(), compare);

		double ans = 0;
		for(int i = 0; i < n - 1; ++i) {
			ans += distanceBetn2Points(vec[i], vec[i + 1]);
		}
		cout << ans << '\n';
		cerr << __cplusplus << endl;
	}
	return 0;
}