#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using bs = bitset<9>;

template<class T> bool uin(T& a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool uax(T& a, T b) { return a < b ? (a = b, true) : false; }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	cin >> n >> m;
	vector<int> a(n), b(m);
	for(int i = 0; i < n; ++i) cin >> a[i];
	for(int i = 0; i < m; ++i) cin >> b[i];
	for(int i = 0; i < (1 << 9); ++i) {
		for(int j = 0; j < n; ++j) {
			bool flag = false;
			for(int k = 0; k < m; ++k) {
				if(((a[j] & b[k]) | i) == i) {
					flag = true;
					break;
				}
			}
			if(!flag) {
				break;
			} else {
				continue;
			}
		}
		
	}
	return 0;
}