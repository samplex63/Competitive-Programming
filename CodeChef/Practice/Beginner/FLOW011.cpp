#include<bits/stdc++.h>
using namespace std;

int main() {
	int t, salary;
	double ans;

	cin >> t;
	while(t--) {
		ans = 0;
		scanf(" %d", &salary);
		ans += salary * 2;
		if(salary >= 1500) {
			ans -= (salary * .02);
			ans += 500;
		}
		printf("%.2lf\n",ans);
	}
	return 0;
}