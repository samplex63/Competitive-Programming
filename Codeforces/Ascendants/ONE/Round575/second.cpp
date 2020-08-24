#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll q;
	cin >> q;
	while(q--) {
		ll n, k;
		cin >> n >> k;
		vector<ll> vec(n);
		vector<bool> v(n, false);
		for(int i = 0; i < n; ++i) {
			cin >> vec[i];
			if(vec[i] & 1) {
				v[i] = true;
			}
		}
		ll maxg = count(v.begin(), v.end(), true);
		if(maxg % 2 == k % 2 && maxg >= k) {
			cout << "YES\n";
			ll cnt = k;
			for(int i = 0; i < n; ++i) {
				if(v[i]) {
					if(cnt == 1) {
						cout << n;
						break;
					}
					cout << i + 1 << ' ';
					cnt--;
				}
			}
			cout << '\n';
		} else {
			cout << "NO\n";
		}

	}

	return 0;
}