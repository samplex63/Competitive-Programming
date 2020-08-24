#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int) (x).size()

typedef long long ll;
typedef long double ld;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n, m, k;
	cin >> n >> m >> k;
	vector<ll> vec(m);
	for(int i = 0; i < m; ++i) {
		cin >> vec[i];
	}
	ll ini = k;
	ll sub = 0, ans = 0;
	for(int i = 0; i < m; ++i) {
		if(vec[i] <= ini) {
			sub++;
		} else {
			ans++;
			ini += sub;
		}
	}
	return 0;
}