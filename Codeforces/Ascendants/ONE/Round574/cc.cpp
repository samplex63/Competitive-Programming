#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	vector<int> vec1(n), vec2(n);
	for(auto& x: vec1) {
		cin >> x;
	}
	for(auto& x: vec2) {
		cin >> x;
	}

	vector<ll> dp1(n), dp2(n);
	dp1[0] = vec1[0];
	dp2[0] = vec2[0];
	if(n == 1) {
		cout << max(dp1[0], dp2[0]);
		return 0;
	}
	dp1[1] = dp2[0] + vec1[1];
	dp2[1] = dp1[0] + vec2[1];
	for(int i = 2; i < n; ++i) {
		dp1[i] = max(dp2[i - 1], dp2[i - 2]) + vec1[i];
		dp2[i] = max(dp1[i - 1], dp1[i - 2]) + vec2[i];
	}
	cout << max(dp1.back(), dp2.back());
	return 0;
}