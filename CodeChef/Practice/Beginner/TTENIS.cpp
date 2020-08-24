#include<bits/stdc++.h>
using namespace std;

int main() {
	unsigned int t;
	string inp;

	cin >> t;
	while(t--) {
		cin >> inp;
		int p1s = 0;
		int p2s = 0;
		bool flag;
		for(auto x: inp)
			(x == '1')? p1s++: p2s++;
		if(p1s == 11 && p2s < 10)
			flag = true;
		else if(p1s == 11 && p2s < 10)
			flag = false;
		else
			(p1s > p2s)? flag = true: flag = false;
		flag? cout << "WIN\n": cout << "LOSE\n";
	}
	return 0;
}