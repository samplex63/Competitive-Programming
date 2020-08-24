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
	int n, m;
	cin >> n >> m;
	n %= 6;
	vector<int> vec{0, 1, 2};
	for(int i = 0; i < n; ++i) {
		if(i & 1 ^ 1) swap(vec[0], vec[1]);
		else swap(vec[1], vec[2]);
	}
	cout << vec[m] << '\n';
	return 0;
}