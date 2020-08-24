#include<bits/stdc++.h>
using namespace std;

int main() {
	int t, ans;
	string input;
	cin >> t;
	while(t--) {
		ans = 0;
		cin >> input;
		for(int i = 0; i < input.size(); ++i) {
			if(input[i] == 'A' || input[i] == 'D' || input[i] == 'O' || input[i] == 'P' || input[i] == 'R' || input[i] == 'Q')
				ans++;
			else if(input[i] == 'B')
				ans = ans + 2;
		}
		cout << ans << endl;
	}
	return 0;
}