#include<bits/stdc++.h>
using namespace std;

#define LL long long int
#define ULL unsigned long long int

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	double a, b;
	char c;
	cin >> a >> b >> c;
	if(c == '+')
		a += b;
	else if(c == '-')
		a -= b;
	else if(c == '*')
		a *= b;
	else
		a /= b;
	cout << fixed << setprecision(7) << a << '\n';
	
	return 0;
}