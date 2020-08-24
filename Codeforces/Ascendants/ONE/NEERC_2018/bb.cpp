#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int) (x).size()

typedef long long ll;
typedef long double ld;

vector<ll> fac;
void printDivisors(ll n) {
	for(ll i = 1; i <= sqrt(n); ++i) { 
		if(n % i == 0)  {
			fac.push_back(i);
			fac.push_back(n / i);
		}
	}
	return;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	printDivisors(n);
	sort(fac.begin(), fac.end());
	fac.erase(unique(fac.begin(), fac.end()), fac.end());
	ll small = INT_MAX, big = INT_MAX;

	for(int i = sz(fac) - 2; i > 0; --i) {
		if(small == INT_MAX) {
			small = fac[i];
		} else {
			if(big == INT_MAX) {
				if(small % fac[i] == 0) continue;
				big = fac[i];
			}
		}
	}
	debug(fac, big, small);
	if(small == INT_MAX || big == INT_MAX) {
		cout << "NO\n";
		cerr << "TIME: " << 1.0 * clock() / CLOCKS_PER_SEC << '\n';
		return 0;
	}
	cout << "YES\n";
	cout << "2\n" << big - 1 << ' ' << big << '\n';
	cout << ((n - 1) * big * small - n * (big - 1) * small) / (n * big) << ' ' << small << '\n';

	cerr << "TIME: " << 1.0 * clock() / CLOCKS_PER_SEC << '\n';
	return 0;
}