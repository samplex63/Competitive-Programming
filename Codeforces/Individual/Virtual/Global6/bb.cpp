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
		ll x;
		cin >> x;
		vector<ll> vec = {1, 2, 3, 4, 5, 6};
		if(!binary_search(vec.begin(), vec.end(), x % 14LL) || x < 7) cout << "NO\n";
		else cout << "YES\n";
	}
	return 0;
}