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
	int n;
	cin >> n;
	while(n--) {
		ll c, t;
		cin >> c >> t;
		vector<ll> vec(c, t / c);
		ll times = t % c;
		for(int i = 0; i < times; ++i) {
			vec[i]++;
		}

		for(int i = 0; i < c; ++i) {
			vec[i] *= vec[i];
		}
		cout << accumulate(vec.begin(), vec.end(), 0LL) << '\n';
	}
	return 0;
}