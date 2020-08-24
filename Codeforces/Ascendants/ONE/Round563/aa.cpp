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
	vector<int> vec(n + n);
	for(int i = 0; i < n + n; ++i) {
		cin >> vec[i];
	}
	sort(vec.begin(), vec.end());
	if(vec.front() == vec.back()) {
		cout << "-1\n";
	} else {
		for(int i = 0; i < n + n; ++i) {
			cout << vec[i] << ' ';
		}
		cout << '\n';
	}
	return 0;
}