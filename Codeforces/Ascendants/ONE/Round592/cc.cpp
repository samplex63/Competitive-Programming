#include <bits/stdc++.h>
using namespace std;

#define sz(x) static_cast<int>((x).size())

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

template<class T> bool cmn(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool cmx(T &a, T b) { return a < b ? (a = b, true) : false; }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll n, p, w, d;
	cin >> n >> p >> w >> d;

	ll wins = -1, draws = -1;
	for(ll i = 0; i < w; ++i) {
		ll sub = i * d;
		if(p < sub) break;
		if((p - sub) % w == 0) {
			wins = (p - sub) / w;
			draws = i;
			break;
		}
	}

	if(wins < 0 || wins + draws > n) {
		cout << -1 << '\n';
	} else {
		cout << wins << ' ' << draws << ' ' << n - wins - draws << '\n';
	}
	return 0;
}