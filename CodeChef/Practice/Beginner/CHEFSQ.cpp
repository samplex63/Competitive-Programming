#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int arr[n], i, j = 0, c = 0;
		for(i = 0; i < n; i++)
			cin >> arr[i];
		int f;
		cin >> f;
		int subs[f];
		for(i = 0; i < f; i++)
			cin >> subs[i];
		for(i = 0; i < n; i++) {
			if(subs[j] == arr[i]) {
				j++;
				c++;
			}
			if(c == f)
				break;
		}
		if(c == f)
			cout<<"Yes"<<"\n";
		else
			cout<<"No"<<"\n";
	}
	return 0;
}