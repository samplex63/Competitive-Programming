#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())

typedef long long ll;
typedef long double ld;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		n *= 2;
		vector<int> vec(n);
		for(int i = 0; i < n; ++i) {
			cin >> vec[i];
		}
		sort(vec.begin(), vec.end());
		cout << vec[n / 2] - vec[n / 2 - 1] << '\n';
	}
	return 0;
}