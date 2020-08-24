#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int) (x).size()

typedef long long ll;
typedef long double ld;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<int> vec(n + 1, 0);
	int cnt = 1;
	for(int i = 2; i < n + 1; ++i) {
		if(vec[i] == 0) {
			for(int j = i; j <= n; j += i) {
				vec[j] = cnt;
			}
			cnt++;
		}
	}
	for(int i = 2; i <= n; ++i) {
		cout << vec[i] << ' ';
	}
	return 0;
}