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
	int tt;
	cin >> tt;
	while(tt--) {
		int n, m;
		cin >> n >> m;
		vector<vector<int>> vec(n, vector<int>(m));
		for(int i = 0; i < n; ++i) {
			for(int j = 0; j < m; ++j) {
				cin >> vec[i][j];
			}
		}
		vector<int> ren(n), rem(m);
		for(int i = 0; i < n; ++i) {
			for(int j = 0; j < m; ++j) {
				if(vec[i][j] == 1) {
					ren[i] = 1;
					rem[j] = 1;
				}
			}
		}
		int cntn = count(all(ren), 0), cntm = count(all(rem), 0);
		int val = min(cntn, cntm);
		cout << (!(val & 1) ? "Vivek" : "Ashish") << '\n';
	}
	return 0;
}