#include<bits/stdc++.h>
using namespace std;

int main() {
	unsigned int t, n;

	cin >> t;
	while(t--) {
		int cnt = 0;
		cin >> n;
		vector<string> vec(n);
		for(auto &x: vec)
			cin >> x;
		sort(vec.begin(), vec.end());
		if(binary_search(vec.begin(), vec.end(), "simple"))
			cnt++;
		if(binary_search(vec.begin(), vec.end(), "cakewalk"))
			cnt++;
		if(binary_search(vec.begin(), vec.end(), "easy"))
			cnt++;
		if(binary_search(vec.begin(), vec.end(), "easy-medium") || binary_search(vec.begin(), vec.end(), "medium"))
			cnt++;
		if(binary_search(vec.begin(), vec.end(), "medium-hard") || binary_search(vec.begin(), vec.end(), "hard"))
			cnt++;
		(cnt == 5)? cout << "Yes\n": cout << "No\n";
	}
	return 0;
}