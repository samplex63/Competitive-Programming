#include<iostream>
#include<cstdlib>

using namespace std;

int main() {
	int t, len, i, j, num, num2, minj, maxi;
	string s;
	cin >> t;
	while(t--) {
		cin >> s;
		len = s.size();
		for(i = 0; i < len - 1; i++) {
			if(s[i] != '.') {
				for(j = i + 1; j < len; j++) {
					if(s[j] != '.') {
						num = s[i] - '0';
						num2 = s[j] - '0';
						maxi = i + num;
						if(maxi > len)
							maxi = len - 1;
						minj = j - num2;
						if(minj < 0)
							minj = 0;
						if(maxi >= minj) {
							cout << "unsafe" << endl;
							goto label;
						}
					}
				}
			}
		}
		cout << "safe" << endl;
		label:
	}
	return 0;
}
