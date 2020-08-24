#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int) (x).size()

typedef long long ll;
typedef long double ld;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, a, x, b, y;
	cin >> n >> a >> x >> b >> y;
	int cnt = 0;
	vector<int> arr1(n), arr2(n);
	for(int i = a - 1; i != x - 1; ++i) {
		if(i >= n) i = 0;
		if(i == x - 1) break;
		arr1[i] = cnt++;
		// cerr << i << '\n';
	}
	cnt = 0;
	for(int i = b - 1; i != y - 1; --i) {
		if(i <= -1) i = n - 1;
		if(i == y - 1) break;
		arr2[i] = cnt++;
		// cerr << 2 << '\n';
	}
	bool flag = false;
	for(int i = 0; i < n; ++i) {
		if(arr1[i] == arr2[i] && arr1[i] != 0) {
			flag = true;
			break;
		}
	}
	cout << (flag? "YES\n": "NO\n");
	return 0;
}