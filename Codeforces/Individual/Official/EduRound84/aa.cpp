#include <bits/stdc++.h>
using namespace std;

#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

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
		if(n >= k * k && (n - k * k) % 2 == 0) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
		// int sq = sqrt(n);
		// if((sq * sq) == n && k == sq) {
		// 	cout << "YES\n";
		// } else if(n & 1 && k == 1){
		// 	cout << "YES\n";
		// } else if(n % 2 == 0 && k == 2) {
		// 	cout << "YES\n";
		// } else {
		// 	cout << "NO\n";
		// }
	}
	return 0;
}