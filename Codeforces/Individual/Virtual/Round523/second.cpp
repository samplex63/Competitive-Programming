#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;
	vector<int> vec(n);
	for(auto& x: vec) {
		cin >> x;
	}
	sort(vec.begin(), vec.end());
	long long ans = accumulate(vec.begin(), vec.end(), -1ll);
	
	ans -= vec.back();
	ans -= n;
	int g = 1;
	for(int i = 0; i < n; ++i) {
		if(vec[i] >= g) g++;
	}
	cout << ans + g << '\n';
	return 0;
}