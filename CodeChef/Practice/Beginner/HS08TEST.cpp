#include<bits/stdc++.h>
using namespace std;

int main() {
	int c;
	float bal, ans;
	cin >> c >> bal;
	ans = bal;
	if(c % 5 == 0 && c <= (bal - 0.5))
		ans -= (c + 0.5);
	printf("%.2f",ans);
	return 0;
}