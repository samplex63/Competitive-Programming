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
		int n, x;
		cin >> n >> x;
		vector<int> vec(n);
		for(int& y: vec) cin >> y;
		int odd = 0, ev = 0;
		for(int i = 0; i < x; ++i) {
			if(vec[i] & 1) odd++;
			else ev++;
		}
		bool flag = false;
		if(odd & 1) {
			flag = true;
		} else {
			for(int i = x; i < n; ++i) {
				if(vec[i] % 2 == 0) {
					if(odd) flag = true;
				} else if(odd < x) flag = true;
			}
		}
		cout << (flag ? "Yes\n" : "No\n");
	}
	return 0;
}