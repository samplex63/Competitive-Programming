#include<bits/stdc++.h>
using namespace std;

int main() {
	int t, q;
	double ans, p;

	cin >> t;
	while(t--) {
		scanf("%d%lf",&q, &p);
		ans = q * p;
		if(q > 1000)
			ans *= .9;
		printf("%lf\n",ans);
	}
	return 0;
}