#include<bits/stdc++.h>
using namespace std;

#define ULL unsigned long long int

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unsigned int t;

	cin >> t;
	while(t--) {
		ULL a, b, c, d, ans = 0;
		cin >> a >> b >> c >> d;
	   
		for(ULL i = min(a, b); i <= max(a, b); ++i)
			if(max(c, d) >= max(min(c, d), i + 1))
				ans += max(c, d) - max(min(c, d), i + 1) + 1;
		cout << ans << '\n';
	}
	return 0;
}