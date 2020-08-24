#include <bits/stdc++.h>
using namespace std;

#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()

using ll = long long;
using ld = long double;

template<class T> bool cmn(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool cmx(T &a, T b) { return a < b ? (a = b, true) : false; }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--) {
		int n, x;
		cin >> n >> k;
		vector<int> vec(n);
		for(int& x: vec) cin >> x;
		set<int> st(all(vec));
		int ans = k;
		for(auto it = st.begin(); it != st.end(); ++it) {
			ans -= *it - distance(st.begin(), it) + 1;
			if(ans < 0) {
				if(it != st.begin()) {
					ans += *it - distance(st.begin(), it) + 1;
					ans += *prev(it) + ans;
				}
			}
		}
	}
	return 0;
}