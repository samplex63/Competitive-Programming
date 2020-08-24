#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	int m1 = INT_MIN;
	for(int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		m1 = max(m1, x);
	}

	int m;
	cin >> m;
	int m2 = INT_MIN;
	for(int i = 0; i < m; ++i) {
		int x;
		cin >> x;
		m2 = max(m2, x);
	}

	cout << m1 << ' ' << m2 << '\n';

	return 0;
}