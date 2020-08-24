#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ULL;
typedef long long int LL;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unsigned int t;
	int time;
	ULL ans;
	
	cin >> t;
	while(t--) {
		cin >> time;
		time--;
		ans = time / 26;
		ans = pow(2, ans);
		if((time % 26) < 2) {
			cout << ans << " 0 0\n";
		} else if((time % 26) < 10) {
			cout << "0 " << ans << " 0\n";
		} else {
			cout << "0 0 " << ans << endl;
		}
	}
	return 0;
}