#include<bits/stdc++.h>
using namespace std;

#define LL long long int
#define ULL unsigned long long int

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unsigned int t;

	cin >> t;
	while(t--) {
		ULL mel, ban;
		cin >> mel >> ban;
		cout << 2 * __gcd(mel, ban) << '\n';
	}
	return 0;
}