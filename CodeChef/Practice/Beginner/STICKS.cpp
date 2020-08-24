#include<bits/stdc++.h>
using namespace std;

int main() {
	unsigned int t, n;

	cin >> t;
	while(t--) {
		cin >> n;

		int len = -1, brd = -1;
		vector<int> vec(n);
		for(auto &x: vec)
			cin >> x;
		sort(vec.begin(), vec.end());
		for(int i = 0; i < n - 1; ++i) {
			if(vec[i] == vec[i + 1] && vec[i] > len) {
				len = vec[i];
				i++;
			}
		}
		if(len != -1) {
			auto it = find(vec.begin(), vec.end(), len);
	   		vec.erase(it);

	   		it = find(vec.begin(), vec.end(), len);
	   		vec.erase(it);

	    	for(int i = 0; i < vec.size() - 1; ++i) {
				if(vec[i] == vec[i + 1] && vec[i] > brd) {
					brd = vec[i];
					i++;
				}
			}
			(brd != -1)? cout << len * brd << endl: cout << "-1" << endl;
   		}
   		else
   			cout << "-1" << endl;
	}
	return 0;
}