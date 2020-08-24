#include<bits/stdc++.h>
using namespace std;

int main() {
	unsigned int t;
	array <unsigned int, 4> arr;

	cin >> t;
	while(t--) {
		array <unsigned int, 4> cnt;
		array <unsigned int , 4> two;
		array <unsigned int , 4> four;
		for(auto &x: arr)
			cin >> x;
		for(int i = 0; i < 4; ++i) {
			cnt[i] = count(arr.begin(), arr.end(), arr[i]);
			two[i] = 2;
			four[i] = 4;
		}
		(cnt == two || cnt == four)? cout << "YES\n": cout << "NO\n"; 
	}
	return 0;
}