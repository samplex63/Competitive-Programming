#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp> 

using namespace boost::multiprecision;
using namespace std;

#define forn(i, n) for(int i = 0; i < (n); i++)

cpp_int factorial(int num) { 
	cpp_int fact = 1;
	for(int i = num; i > 1; i--)
		fact *= i;
	return fact;
} 

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t, n, a;

	cin >> t;
	while(t--) {
		cin >> a;
		cout << factorial(a) << endl;
	}
	return 0;
}