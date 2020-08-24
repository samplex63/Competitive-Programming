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
	vector<ll> vec(n);
	for(int i = 0; i < n; ++i) {
		cin >> vec[i];
	}

	for(int i = 0; i < n; ++i) {
		if(vec[i] >= 0) {
			vec[i] = -vec[i] - 1;
		}
	}

	if(n & 1) {
		int ind = min_element(vec.begin(), vec.end()) - vec.begin();
		vec[ind] = -vec[ind] - 1;
	}
	for(int i = 0; i < n; ++i) {
		cout << vec[i] << ' ';
	}
	cout << '\n';
	return 0;
}