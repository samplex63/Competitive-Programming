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
	if(any_of(vec.begin(), vec.end(), [&](int x) { return x % 2 == 0; }) && any_of(vec.begin(), vec.end(), [&](int x) { return x % 2 == 1; })) {
		sort(vec.begin(), vec.end());
		for(int i = 0; i < n; ++i) {
			cout << vec[i] << ' ';
		}
		cout << '\n';
	} else {
		for(int i = 0; i < n; ++i) {
			cout << vec[i] << ' ';
		}
		cout << '\n';
	}
	return 0;
}