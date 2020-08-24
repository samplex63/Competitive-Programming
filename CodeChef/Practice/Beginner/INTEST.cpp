#include<bits/stdc++.h>
using namespace std;

#define ULLI unsigned long long int
#define forn(i, n) for(int i = 0; i < (n); i++)

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, k, ans = 0;
	ULLI a;

	cin >> n >> k;
	forn(i, n) {
		cin >> a;
		if(a % k == 0)
			ans++;
	}
	cout << ans << endl;
	return 0;
}