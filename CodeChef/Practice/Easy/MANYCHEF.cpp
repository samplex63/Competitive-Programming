#include <bits/stdc++.h>
using namespace std;

#define DEBUG(x) cerr << (#x) << " = " << (x) << '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		string inp;
		cin >> inp;
		for(int i = inp.size() - 4; i >= 0; --i) {
			if((inp[i] == 'C' || inp[i] == '?') && (inp[i + 1] == 'H' || inp[i + 1] == '?') && (inp[i + 2] == 'E' || inp[i + 2] == '?') && (inp[i + 3] == 'F' || inp[i + 3] == '?')) {
				inp[i] = 'C';
				inp[i + 1] = 'H';
				inp[i + 2] = 'E';
				inp[i + 3] = 'F';
				i -= 3; 
			}
		}
		for(auto &x: inp) {
			if(x == '?') {
				x = 'A';
			}
		}
		cout << inp << '\n';
	}
	return 0;
}