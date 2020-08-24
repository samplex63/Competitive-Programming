#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
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
	int n;
	ll x, k;
	cin >> n >> k >> x;
	vector<ll> vec(n);
	for(ll& y: vec) cin >> y;
	int zcnt = count(all(vec), 0);
	int ncnt = 0;
	for(int i = 0; i < n; ++i) if(vec[i] < 0) ncnt++;
	if(zcnt > k) {
		vec[0] += k * x;
		for(ll y: vec) cout << y << ' ';
		return 0;
	}
	k -= zcnt;
	for(int i = 0; i < n; ++i) {
		if(vec[i] == 0) {
			if(ncnt % 2 == 0) {
				vec[i] -= x;
				ncnt++;
			} else {
				vec[i] += x;
			}
		}
	}
	set<pair<ll, int>> pos;
	for(int i = 0; i < n; ++i) {
		pos.insert({abs(vec[i]), i});
	}
	if(ncnt % 2 == 0) {
		auto val = *pos.begin();
		if(vec[val.se] > 0) {
			while(k > 0 && vec[val.se] >= 0) {
				k--;
				vec[val.se] -= x;
			}
			pos.insert({abs(vec[val.se]), val.se});
		} else {
			while(k > 0 && vec[val.se] <= 0) {
				k--;
				vec[val.se] += x;
			}
			pos.insert({abs(vec[val.se]), val.se});
		}
		pos.erase(pos.begin());
	}
	while(k > 0) {
		auto val = *pos.begin();
		if(vec[val.se] < 0) {
			vec[val.se] -= x;
		} else {
			vec[val.se] += x;
		}
		pos.insert({abs(vec[val.se]), val.se});
		pos.erase(pos.begin());
		k--;
	}
	for(ll y: vec) cout << y << ' ';
	return 0;
}
