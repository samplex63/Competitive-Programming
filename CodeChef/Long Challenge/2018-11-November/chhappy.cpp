#include<bits/stdc++.h>
using namespace std;

#define UI unsigned int

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t, temp, temp2;
	array<int, 100000> arr;
	UI len, i, j;
	cin >> t;
	while(t) {
		cin >> len;
		for(i = 1; i <= len; ++i)
			cin >> arr[i];
		for(i = 1; i < len; ++i) {
			temp = arr[i];
			for(j = i + 1; j <= len; ++j) {
				temp2 = arr[j];
				if(arr[temp] == arr[temp2] && temp != temp2) {
					cout << "Truly Happy" << endl;
					goto label;
				}
			}
		}
		cout << "Poor Chef" << endl;
		label:
		t--;
	}
	return 0;
}