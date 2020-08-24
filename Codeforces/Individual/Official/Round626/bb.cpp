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
	int n, m, k;
	cin >> n >> m >> k;
	vector<int> vec1(n), vec2(m);
	for(int i = 0; i < n; i++) {
		cin >> vec1[i];
	}
	for(int i = 0; i < m; i++) {
		cin >> vec2[i];
	}
	vector<int> log1(n + 1, 0), log2(m + 1, 0);
	for(int i = 1; i <= n; i++) {
		if(vec1[i - 1]) log1[i] = log1[i - 1] + 1;
	}
	for(int i = 1; i <= m; i++) {
		if(vec2[i - 1]) log2[i] = log2[i - 1] + 1;
	}
	ll ans = 0;
	for(int i = 1; i <= n; i++) {
		if(k % i == 0) {
			int val = k / i;
			ll cnt1 = 0, cnt2 = 0;
			for(int j = 1; j <= n; j++) {
				if(log1[j] >= i) cnt1++;
			}
			for(int j = 1; j <= m; j++) {
				if(log2[j] >= val) cnt2++;
			}
			ans += cnt1 * cnt2;
		}
	}
	cout << ans << '\n';
	return 0;
}