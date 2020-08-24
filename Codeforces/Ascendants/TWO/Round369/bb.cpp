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
	vector<vector<ll>> vec(n, vector<ll>(n));
	vector<ll> row(n), col(n);
	int zi = 0, zj = 0;
	ll d1 = 0, d2 = 0;
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < n; ++j) {
			cin >> vec[i][j];
			if(vec[i][j] == 0) {
				zi = i;
				zj = j;
			}
			row[i] += vec[i][j];
			col[j] += vec[i][j];
			if(i == j) d1 += vec[i][j];
			if(i + j == n - 1) d2 += vec[i][j];
		}
	}
	if(n == 1) {
		cout << 2 << '\n';
		return 0;
	}
	ll sum = row[0];
	if(zi == 0) sum = row[1];
	vec[zi][zj] = sum - row[zi];
	if(vec[zi][zj] <= 0) {
		cout << -1 << '\n';
		return 0;
	}
	row[zi] = sum;
	col[zj] += vec[zi][zj];
	if(zi == zj) {
		d1 += vec[zi][zj];
	}
	if(zi + zj == n - 1) d2 += vec[zi][zj];
	for(int i = 0; i < n; ++i) {
		if(row[i] != sum || col[i] != sum) {
			cout << -1 << '\n';
			return 0;
		}
	}
	if(d1 != sum || d2 != sum) {
		cerr << sum << ' ' << d1 << ' ' << d2 << '\n';
		cout << -1 << '\n';
		return 0;
	}
	cout << vec[zi][zj] << '\n';
	return 0;
}