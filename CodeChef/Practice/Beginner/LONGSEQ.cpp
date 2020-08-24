#include<bits/stdc++.h>
using namespace std;

int main() {
	unsigned int t, a0, a1;
	string num;
	bool flag;

	cin >> t;
	while(t--) {
		flag = 0;
		a1 = a0 = 0;
		cin >> num;
		for(auto x: num)
			(x == '1')? a1++: a0++;
		(a1 == 1 || a0 == 1 )?	cout << "Yes\n": cout << "No\n";
	}
	return 0;
}