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
	vector<ll> vec(3);
	cin >> vec[0] >> vec[1] >> vec[2];
	sort(vec.begin(), vec.end());

	ll k, ans = 0;
	cin >> k;
	if(vec[1] - vec[0] < k) {
		ans += (vec[1] - vec[0]) - k;
	}
	if(vec[2] - vec[1] < k) {
		ans += (vec[2] - vec[1]) - k;
	}
	cout << -ans << '\n';
	return 0;
}