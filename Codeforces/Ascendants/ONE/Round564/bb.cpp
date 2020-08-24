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
	int num = n / 2 + 1;
	cout << num << '\n';
	int i;
	for(i = 1; i <= num; ++i) {
		cout << "1 " << i << '\n';
	}
	n -= num;
	i = 2;
	while(n--) {
		cout << num << ' ' << i++ << '\n';
	}
	return 0;
}