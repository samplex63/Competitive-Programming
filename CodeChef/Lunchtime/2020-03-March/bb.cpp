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
		int n, k;
		cin >> n >> k;
		set<int> pri;
		for(int j = 0; j < n; ++j) {
			int x;
			cin >> x;
			for(int i = 2; i * i <= x; ++i) {
				if(x % i == 0) {
					pri.insert(i);
					while(x % i == 0) x /= i;
				}
			}
			if(x > 1) pri.insert(x);
		}
		for(int i = k; i >= 1; --i) {
			if(!pri.count(i)) {
				cout << i << '\n';
				break;
			}
		}
	}
	return 0;
}