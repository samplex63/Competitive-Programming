#include<bits/stdc++.h>
using namespace std;

int main() {
	int t, n, value;
	vector<int> vec;
	scanf("%d",&t);
	while(t--) {
		cin >> n;
		while(n--) {
			scanf("%d",&value);
			vec.push_back(value);
		}
		sort(vec.begin(), vec.end());
		printf("%d\n", vec[0] + vec[1]);
		vec.clear();
	}
	return 0;
}