#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	if(n & 1) {
		cout << "YES\n";
		// int ans = 1;
		vector<int> vec(2 * n);
		vec[0] = 1;
		int curr = 0;
		for(int i = 2; i <= 2 * n; ++i) {
			if(!(i & 1)) curr += n;
			else curr++;
			curr %= 2 * n;
			vec[curr] = i;
		}
		for(auto x: vec) cout << x << ' ';
		cout << '\n';
	} else {
		cout << "NO\n";
	}

	return 0;
}