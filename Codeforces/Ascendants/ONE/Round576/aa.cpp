#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, x, y;
	cin >> n >> x >> y;
	vector<int> vec(n);
	for(int i = 0; i < n; ++i) {
		cin >> vec[i];
	}

	bool flag = true;
	for(int i = 0; i < n; ++i) {
		for(int j = max(0, i - x); j < i; ++j) {
			// if(i == j) continue;
			flag &= vec[i] < vec[j];
		}

		for(int j = i + 1; j <= min(n - 1, i + y); ++j) {
			// if(i == j) continue;
			flag &= vec[i] < vec[j];
		}
		if(flag) {
			cout << i + 1 << '\n';
			return 0;
		} else {
			flag = true;
		}
	}

	return 0;
}