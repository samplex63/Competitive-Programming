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
	if(vec[0] != 0 && vec[0] != 1) {
		cout << -1 << '\n';
		return 0;
	}
	int curp = 0;
	vector<int> ans(n);
	ans[0] = !vec[0];
	while(curp < n) {
		int st = curp;
		while(curp < n && vec[curp] == vec[st]) {
			curp++;
		}
		if(curp == n) {
			for(int i = st; i < n; ++i) {
				ans[i] = ans[st];
			}
		} else {
			if(vec[curp] >= ans[st] && vec[curp] <= ans[st] + curp) {
				int val = ans[st];
				for(int i = t; i < curp; ++i) {
					ans[i] = val;
					if(val < vec[curp]) val++;
				}
				st = curp - 1;
			} else {
				cout << -1;
				return 0;
			}
		}
	}
	for(int i = 0; i < n; ++i) {
		cout << ans[i] << ' ';
	}
	return 0;
}