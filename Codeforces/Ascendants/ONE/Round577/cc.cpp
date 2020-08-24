#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) (int) (x).size()

typedef long long ll;
typedef long double ld;

typedef pair<int, int> pi;
typedef pair<ll, ll> pl;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	ll k;
	cin >> n >> k;
	vector<ll> vec(n);
	for(int i = 0; i < n; ++i) {
		cin >> vec[i];
	}

	sort(vec.begin(), vec.end());
	ll mid = vec[n / 2];
	vector<ll> sub;
	for(int i = n / 2; i < n; ++i) {
		sub.push_back(vec[i]);
	}
	// for(auto x: sub) cerr << x << ' ';
	for(ll i = 1; i < sz(sub); ++i) {
		ll minus = (sub[i] - sub[i - 1]) * i;
		if(minus >= k) {
			mid += k / i;
			k = 0ll;
			break;
		} else {
			mid += minus / i;
			k -= minus;
		}
	}
	if(k > 0ll) {
		mid += k / (ll) sz(sub);
	}
	cout << mid << '\n';
	return 0;
}