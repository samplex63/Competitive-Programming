#include<bits/stdc++.h>
using namespace std;

int main() {
	unsigned int t, n;
	cin >> t;
	while(t--) {
		cin >> n;
		vector<unsigned int> vec(n);
		for(auto &x: vec)
			cin >> x;
		auto minarr = min_element(vec.begin(), vec.end());
		
		cout << distance(vec.begin(), minarr) + 1 << endl;
	}
	return 0;
}