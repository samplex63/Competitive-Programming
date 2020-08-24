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
	ll l, r, k;
	cin >> l >> r >> k;
	ll st = 1;
	bool smth = false;
	while(st <= r / k) {
		if(st >= l && st <= r) {
			cout << st << ' ';
			smth = true;
		}
		st *= k;
	}
	if(st >= l && st <= r) {
		cout << st << ' ';
		smth = true;
	}
	if(!smth) cout << -1;
	return 0;
}