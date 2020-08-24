#include<bits/stdc++.h>
using namespace std;

int main() {
	unsigned int t;
	string inp, cpy;
	cin >> t;
	while(t--) {
		cin >> inp;
		bool flag = false;
		cpy = inp;
		cpy.erase(unique(cpy.begin(), cpy.end()), cpy.end());
		if(cpy == inp) {
			int cnt1 = count(inp.begin(), inp.end(), inp[0]);
			int cnt2 = count(inp.begin(), inp.end(), inp[1]);
			if((cnt1 + cnt2) == inp.size()) {
				flag = true;
			}
		}
		flag? cout << "YES\n": cout << "NO\n";
	}
	return 0;
}