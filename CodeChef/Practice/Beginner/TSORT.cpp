#include<bits/stdc++.h>
using namespace std;

#define forn(i, n) for(int i = 0; i < (n); i++)

int main() {
	vector<int> vec;
	int t, val;
	cin >> t;
	forn(i, t) {
		cin >> val;
		vec.push_back(val);
	}
	sort(vec.begin(), vec.end());
	forn(i, t)
		cout << vec[i] << endl;

	return 0;
}