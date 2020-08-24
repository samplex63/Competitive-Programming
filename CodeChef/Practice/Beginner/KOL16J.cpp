#include<bits/stdc++.h>
using namespace std;

int main() {
	unsigned int t, n;

	cin >> t;
	while(t--) {
		bool flag = false;
		cin >> n;
		std::vector<int> vec(n);
		std::vector<int> inc(n);

		for(int i = 0; i < n; ++i) {
			cin >> vec[i];
			inc[i] = i + 1;
		}
		if(vec != inc) {
			sort(vec.begin(), vec.end());
			if(vec == inc)
				flag = true;
		}
		flag? cout << "yes\n": cout << "no\n";
	}
	return 0;
}