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
	cin >> n;
	vector<int> vec(n);
	for(int& x: vec) cin >> x;
	int mini = *min_element(all(vec)), maxi = *max_element(all(vec));
	int dif = maxi - mini;
	if(dif & 1) {
		set<int> vals(all(vec));
		if(sz(vals) == 2) {
			cout << *next(vals.begin()) - *vals.begin();
			return 0;
		}
		cout << -1;
		return 0;
	}
	int val = mini + dif / 2;
	for(int i = 0; i < n; ++i) {
		if(vec[i] < val) vec[i] += dif / 2;
		else if(vec[i] > val) vec[i] -= dif / 2;
	}
	if(count(all(vec), val) == n) {
		cout << dif / 2 << '\n';
	} else {
		cout << -1;
	}
	return 0;
}