#include<bits/stdc++.h>
using namespace std;

bool isPrime(unsigned int n) {
	if(n % 2 == 0)
		return false;
    for (ULL i = 3; i <= sqrt(n); i += 2)
		if (n % i == 0)
			return false;
    return true;
}

int main() {
	unsigned int t, n;

	cin >> t;
	while(t--) {
		cin >> n;
		
		unsigned int ans = 0;
		vector<unsigned int> vec(n);
		for(auto &x: vec)
			cin >> x;
		auto it = max_element(vec, vec + n);
	}
	return 0;
}