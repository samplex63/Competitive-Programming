#include <bits/stdc++.h>
using namespace std;

#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()

using ll = long long;
using ld = long double;

template<class T> bool cmn(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool cmx(T &a, T b) { return a < b ? (a = b, true) : false; }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--) {
		ll n, k;
		cin >> n >> k;
		ll first = n;
		for(int i = 2; i <= sqrt(n); ++i) {
			if(n % i == 0) {
				first = i;
				break;
			}
		}
		cout << n + first + (k - 1) * 2 << '\n';
	}
	return 0;
}