#include <bits/stdc++.h>
using namespace std;

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
		int n;
		cin >> n;
		vector<vector<int>> gr(n);
		for(int i = 0; i < n; ++i) {
			int k;
			cin >> k;
			for(int j = 0; j < k; ++j) {
				int x;
				cin >> x;
				gr[i].push_back(x);
			}
		}
		vector<bool> pri(n + 1, false);
		int candi = -1;
		for(int i = 0; i < n; ++i) {
			int s = 0;
			while(s < sz(gr[i]) && pri[gr[i][s]]) {
				s++;
			}
			if(s == sz(gr[i])) {
				candi = i;
			} else {
				pri[gr[i][s]] = true;
			}
		}
		if(candi == -1) {
			cout << "OPTIMAL\n";
		} else {
			cout << "IMPROVE\n";
			cout << candi + 1 << ' ';
			for(int i = 1; i <= n; ++i) {
				if(!pri[i]) {
					cout << i << '\n';
					break;
				}
			}
		}
	}
	return 0;
}