#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<ll> vec;
	for(ll i = 0; i < 32; ++i) {
		vec.push_back((ll) pow(2ll, i));
	}
	
	ll h, w;
	cin >> h >> w;
	ll b = max(h, w), a = min(h, w);
	auto it = upper_bound(vec.begin(), vec.end(), b);
	it--;

	while(1) {
		ll ub = (*it * 5);
		ub /= 4;
		ll lb = (*it * 4);
		lb = ceil((double) lb / 5.0);

		if(a >= ub) {
			a = ub;
			b = *it;
			break;
		} else if(a >= lb) {
			b = *it;
			break;
		} else {
			it--;
		}
	}

	ll b2 = max(h, w), a2 = min(h, w);
	it = upper_bound(vec.begin(), vec.end(), a2);
	it--;

	while(1) {
		ll ub = (*it * 5);
		ub /= 4;
		ll lb = (*it * 4);
		lb = ceil((double) lb / 5.0);

		if(b2 >= ub) {
			b2 = ub;
			a2 = *it;
			break;
		} else if(b2 >= lb) {
			a2 = *it;
			break;
		} else {
			it--;
		}
	}
	if(a2 * b2 > a * b) {
		a = a2;
		b = b2;
	}

	if(max(a, b) > h) {
		cout << min(a, b) << ' ' << max(a, b) << '\n';
	} else {
		cout << max(a, b) << ' ' << min(a, b) << '\n';
	}
	return 0;
}