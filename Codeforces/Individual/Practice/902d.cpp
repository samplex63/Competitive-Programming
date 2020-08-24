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
	vector<vector<int>> vec(n + 1);
	vec[0] = {1};
	vec[1] = {0, 1};
	auto add = [&](int l, int s) {
		vector<int> ret(vec[l]);
		ret.insert(ret.begin(), 0);
		for(int i = 0; i < sz(vec[s]); ++i) {
			ret[i] += vec[s][i];
			ret[i] %= 2;
		}
		return ret;
	};
	for(int i = 2; i <= n; ++i) {
		vec[i] = add(i - 1, i - 2);
	}
	cout << sz(vec[n]) - 1 << '\n';
	for(int i : vec[n]) cout << i << ' ';
	cout << '\n' << sz(vec[n - 1]) - 1 << '\n';
	for(int i : vec[n - 1]) cout << i << ' ';
	cout << '\n';
	return 0;
}