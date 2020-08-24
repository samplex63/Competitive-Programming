#include<bits/stdc++.h>
using namespace std;

#define LL long long int

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unsigned int t, n, k, e;
	LL m, temp;
	cin >> t;
	while(t--) {
		cin >> n >> k >> e >> m;
		std::vector <LL> vec(n - 1, 0);
		for(auto &x: vec) {
			for(int j = 0; j < e; ++j) {
				cin >> temp;
				x += temp;
			}
		}
		LL last = 0;
		for(int i = 0; i < e - 1; ++i) {
			cin >> temp;
			last += temp;
		}
		sort(vec.begin(), vec.end(), greater <LL>());

		LL ans = vec[k - 1] - last + 1;
		if(ans < 0)
			cout << "0" << '\n';
		else if(ans > m)
			cout << "Impossible\n";
		else
			cout << ans << '\n';
	}
	return 0;
}