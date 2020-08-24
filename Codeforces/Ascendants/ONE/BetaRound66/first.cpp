#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> vec(3);
	ll k;
	cin >> vec[0] >> vec[1] >> vec[2] >> k;
	sort(vec.begin(), vec.end());

	ll div = k / 3ll;
	ll remain, ans = 1ll;
	if(vec[0] - 1 < div) {
		remain = vec[0] - 1;
	} else {
		remain = div;
	}
	ans *= (remain + 1);
	k -= remain;

	div = k / 2;
	if(vec[1] - 1 < div) {
		remain = vec[1] - 1;
	} else {
		remain = div;
	}
	ans *= (remain + 1);
	k -= remain;

	if(vec[2] - 1 < k) {
		remain = vec[2] - 1;
	} else {
		remain = k;
	}
	// cerr << ans << ' ' << remain << '\n';
	ans *= (remain + 1);
	cout << ans << '\n';
	return 0;
}