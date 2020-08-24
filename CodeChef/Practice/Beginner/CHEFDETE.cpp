#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unsigned int n;
	cin >> n;
	int arr[n + 1];
	bool check[n + 1] = {};
	for(unsigned int i = 1; i <= n; ++i) {
		cin >> arr[i];
		check[arr[i]] = true;
	}
	for(unsigned int i = 1; i <= n; ++i) {
		if(!check[i])
			cout << i << ' ';
	}
	cout << '\n';
	return 0;
}