#include<bits/stdc++.h>
using namespace std;

int main() {
	unsigned int t;
	array <string, 4> arr; 
	string ingr;

	cin >> t;
	while(t--) {
		for(auto &x: arr)
			cin >> x;
		int n = 4, ans = 0;
		while(n--) {
			cin >> ingr;
			auto it = find(arr.begin(), arr.end(), ingr);
			if(it != arr.end())
				ans++;
		}
		(ans >= 2)? cout << "similar\n": cout << "dissimilar\n";
	}
	return 0;
}