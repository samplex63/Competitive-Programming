#include<bits/stdc++.h>
using namespace std;

int main() {
	unsigned int t, n;
	string inp;

	cin >> t;
	while(t--) {
		bool flag = true, swit = true;
		cin >> n;
		cin >> inp;
		if(count(inp.begin(), inp.end(), 'H') == count(inp.begin(), inp.end(), 'T')) {
			for(int i = 0; i < n; ++i) {
				if(inp[i] != '.') {
					if(swit) {
						if(inp[i] != 'H') {
							flag = false;
							break;
						}
						swit = !swit;
					}
					else {
						if(inp[i] != 'T') {
							flag = false;
							break;
						}
						swit = !swit;
					}
				}
			}
		}
		else
			flag = false;
		flag? cout << "Valid\n": cout << "Invalid\n";
	}
	return 0;
}