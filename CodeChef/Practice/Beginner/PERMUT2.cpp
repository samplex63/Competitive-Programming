#include<bits/stdc++.h>
using namespace std;

#define forn(i, n) for(int i = 0; i < (n); i++)

int main() {
	int n;
	int val;
	int arr[100000];
	while(1) {
		int chck = 0;
		cin >> n;
		if(n == 0)
			break;
		for(int i = 1; i <= n; i++)
			cin >> arr[i];
		for(int i = 1; i <= n; i++) {
			if(arr[arr[i]] != i) {
				chck = 1;
				break;
			}
		}
		(chck == 0)? cout << "ambiguous" << endl: cout << "not ambiguous" << endl;
	}
	return 0;
}