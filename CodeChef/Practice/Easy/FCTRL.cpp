#include<bits/stdc++.h>
using namespace std;

#define ULL unsigned long long int

int main() {
	unsigned int t;
	ULL n, ans, k, value;
	cin >> t;
	while(t--) {
		cin >> n;
		ans = 0;
		k = 1;
		while(1) {
			value = (n / pow(5, k));
			if(value < 1)
				break;
			k++;
			ans += value;
		}
		cout << ans << endl;
	}
	return 0;
}