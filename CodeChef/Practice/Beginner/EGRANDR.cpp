#include<bits/stdc++.h>
using namespace std;

int main() {
	unsigned int t, n;

	cin >> t;
	while(t--) {
		float ans = 0.0;
		bool flag = false;
		cin >> n;
		vector< int > vec(n);
		for(auto &x: vec)
			cin >> x;
		auto it = find(vec.begin(), vec.end(), 2);
		if(it == vec.end()) {
			it = find(vec.begin(), vec.end(), 5);
			if(it != vec.end()) {
				for(auto x: vec)
					ans += x;
				ans /= n;
				if(ans >= 4.0)
					flag = true;
			}
		}
		flag? cout << "Yes\n": cout << "No\n";
	}
	return 0;
}