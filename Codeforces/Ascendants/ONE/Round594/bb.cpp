#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int) (x).size()

typedef long long ll;
typedef long double ld;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<int> vec(n);
	for(int i = 0; i < n; ++i) {
		cin >> vec[i];
	}
	sort(vec.begin(), vec.end());
	ll one = 0, two = 0;
	for(int i = 0; i < n / 2; ++i) {
		one += vec[i];
	}
	for(int i = n / 2; i < n; ++i) {
		two += vec[i];
	}
	// cerr << one << ' ' << two << '\n';/
	cout << one * one + two * two << '\n';
	return 0;
}