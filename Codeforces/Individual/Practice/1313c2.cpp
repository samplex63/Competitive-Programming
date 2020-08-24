#include <bits/stdc++.h>
using namespace std;

#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second

using ll = long long;
using ld = long double;

template<class T> bool cmn(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool cmx(T &a, T b) { return a < b ? (a = b, true) : false; }

vector<vector<int>> getTab(const vector<int>& vec) {
	int n = sz(vec);
	int tabSize = int(log2(n)) + 1;
	vector<vector<int>> ret(tabSize);
	for(int i = 0; i < tabSize; ++i) {
		ret[i].resize(n + 1 - (1 << i));
	}
	iota(all(ret[0]), 0);
	for(int i = 1; i < tabSize; ++i) {
		for(int j = 0; j < sz(ret[i]); ++j) {
			int next = j + (1 << (i - 1));
			if(vec[ret[i - 1][j]] < vec[ret[i - 1][next]]) {
				ret[i][j] = ret[i - 1][j];
			} else {
				ret[i][j] = ret[i - 1][next];
			}
		}
	}
	return ret;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<int> vec(n);
	for(int& x : vec) cin >> x;
	vector<vector<int>> tab = getTab(vec);
	auto getMin = [&](int l, int r) {
		int len = r - l + 1;
		int ind = int(log2(len));
		int next = len - (1 << ind);
		if(vec[tab[ind][l]] < vec[tab[ind][l + next]]) {
			return tab[ind][l];
		} else {
			return tab[ind][l + next];
		}
		// return min(vec[tab[ind][l]], vec[tab[ind][l + next]]);
	};
	vector<int> pref(n + 1);
	for(int i = 1; i <= n; ++i) {
		pref[i] = pref[i - 1] + vec[i - 1];
	}
	vector<int> ans(vec);
	function<void(int, int)> sol = [&](int l, int r) {
		// cerr << l << ' ' << r << '\n';
		if(l == r) {
			ans[l] = vec[l];
			return;
		}
		int pos = getMin(l, r);
		int take_left = pref[pos] - pref[l];
		int take_right = pref[r + 1] - pref[pos + 1];
		if(take_left > take_right) {
			for(int i = pos; i <= r; ++i) {
				ans[i] = vec[pos];
			}
			sol(l, pos - 1);
		} else {
			for(int i = l; i <= pos; ++i) {
				ans[i] = vec[pos];
			}
			sol(pos + 1, r);
		}
	};
	sol(0, n - 1);
	for(int i : ans) {
		cout << i << ' ';
	}
	cout << '\n';
	return 0;
}