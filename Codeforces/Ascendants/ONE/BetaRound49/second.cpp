#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	int cnt = n - 1, real = 1;
	for(int i = 0; i < n; ++i) {
		cout << real << ' ';
		if(i & 1) {
			real -= cnt;
		} else {
			real += cnt;
		}
		cnt--;
	}
	return 0;
}