#include<bits/stdc++.h>
using namespace std;

int main() {
	int t, n, arr[100][100];

	cin >> t;
	while(t--) {
		cin >> n;
		for(int i = 0; i < n; i++)
			for(int j = 0; j <= i; j++)
				cin >> arr[i][j];
		for(int i = n - 2; i >= 0; i--)
			for(int j = 0; j <= i; j++)
				(arr[i + 1][j] > arr[i + 1][j + 1])? arr[i][j] += arr[i + 1][j]: arr[i][j] += arr[i + 1][j + 1];
		cout << arr[0][0] << endl;
	}
	return 0;
}