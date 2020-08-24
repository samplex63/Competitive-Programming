#include<bits/stdc++.h>
using namespace std;

bool oppositeSigns(long int x, long int y) {
    return ((x ^ y) < 0);
}

int main() {
	unsigned int t, n;

	cin >> t;
	while(t--) {
		cin >> n;
		long int arr[n], ans[n];
		for(auto &x: ans)
			x = 1;
		for(long &x: arr)
			cin >> x;
		for(int i = n - 1; i > 0; --i)
			if(oppositeSigns(arr[i], arr[i - 1])) 
				ans[i - 1] += ans[i];
		for(int i = 0; i < n; ++i)
			cout << ans[i] << " ";
		cout << endl;
	}
	return 0;
}