#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ULL;
typedef long long int LL;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b;
	cin >> a >> b;
	
	a -= b;
	if((a % 10) == 9) {
		a -= 1;
	}
	else {
		a += 1;
	}
	cout << a << '\n';
	return 0;
}