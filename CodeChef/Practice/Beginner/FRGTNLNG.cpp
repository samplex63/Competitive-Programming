#include<bits/stdc++.h>
using namespace std;

int main() {
	unsigned int t, n, k;
	string word;
	int limit;

	cin >> t;
	while(t--) {
		cin >> n >> k;
		string dict[n];
		bool arr1[n] = {0};
		for(auto &x: dict)
			cin >> x;
		while(k--) {
			cin >> limit;
			while(limit--) {
				cin >> word;
				for(int i = 0; i < n; ++i) {
					if(word == dict[i])
						arr1[i] = 1;
				}
 			}
		}
		for(auto x: arr1)
			x? cout << "YES ": cout << "NO ";
		cout << endl;
	}
	return 0;
}