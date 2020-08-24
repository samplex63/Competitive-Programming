#include <bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "The value of \"" << #x << "\" is " << x << '\n'
typedef long long int LLI;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		LLI n, a, k;
        cin >> n >> a >> k;
        LLI ansNum = a * n * (n - 1) + (k - 1) * ((n - 2) * 360 - (2 * a * n));
        LLI ansDeno = n * (n - 1);
        cout << ansNum / __gcd(ansNum, ansDeno) << ' ' << ansDeno / __gcd(ansNum, ansDeno) << '\n';
	}
	return 0;
}