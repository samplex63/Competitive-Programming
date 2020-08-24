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
		int n;
		cin >> n;
		vector<int> vec(n);
		for(int& i : vec) cin >> i;
		int ans = 0;
		int max = INT_MIN;
		for(int i = 0; i < n; ++i) {
			if(vec[i] < max) {
				// cerr << "D" << max << ' ' << vec[i] << ' ' << int(log2(max - vec[i])) << '\n';
				cmx(ans, 1 + int(log2(max - vec[i])));
			} else max = vec[i];
		}
		cout << ans << '\n';
	}
	return 0;
}