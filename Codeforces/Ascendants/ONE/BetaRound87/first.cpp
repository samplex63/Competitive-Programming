#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	int maxi = 0, current = 0;
	for(int i = 0; i < n; ++i) {
		int a, b;
		cin >> a >> b;
		int mm = current;
		mm -= a;
		mm += b;
		current = mm;
		maxi = max(mm, maxi);
	}
	cout << maxi << '\n';

	return 0;
}