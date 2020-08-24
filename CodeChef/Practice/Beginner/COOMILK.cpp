#include<bits/stdc++.h>
using namespace std;

int main() {
	unsigned int t, n;

	cin >> t;
	while(t--) {
		bool flag = true, permaflag = true;
		cin >> n;
		std::vector<string> vec(n);
		for(auto &x: vec) {
			cin >> x;
			if(permaflag) {
				if(x == "cookie" && flag) {
					flag = false;
				}
				else if(x == "cookie" && !flag) {
					permaflag = false;
				}
				else if(x == "milk" && !flag) {
					flag = true;
				}
			}
		}
		flag? cout << "YES\n": cout << "NO\n";
	}
	return 0;
}