#include<bits/stdc++.h>
using namespace std;

#define LL long long int

int main() {
	unsigned int t;
	string correct, actual;
	cin >> t;
	while(t--) {
		LL cans = 0, n;
		cin >> n;
		cin >> correct >> actual;
		for(LL i = 0; i < n; ++i)
			if(correct[i] == actual[i])
				cans++;
		
		LL arr[n + 1];
		for(LL i = 0; i <= n; ++i) 
			cin >> arr[i];

		LL answer = arr[0];
		for(LL i = 0; i <= cans; ++i)
			answer = max(answer, arr[i]);
		if(cans == n)
			answer = arr[n];
		cout << answer << endl;
	}
	return 0;
}