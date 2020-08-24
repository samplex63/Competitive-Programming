#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	vector< pair <long int, long int> > vec;
	vec.resize(n);
	for(int i = 0; i < n; ++i) {
		cin >> vec[i].first;
	}
	for(int i = 0; i < n; ++i) {
		cin >> vec[i].second;
	}
	long int min1 = 100001, min2 = 100001, min3 = 100001;
	
	for(unsigned int i = 0; i < n; ++i) {
		if(vec[i].second == 1)
			min1 = min(vec[i].first, min1);
		else if(vec[i].second == 2)
			min2 = min(vec[i].first, min2);
		else if(vec[i].second == 3)
			min3 = min(vec[i].first, min3);
	}
	cout << min((min1 + min2), min3) << '\n';
	return 0;
}