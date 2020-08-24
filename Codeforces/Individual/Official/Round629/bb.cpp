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
		ll n, k;
		cin >> n >> k;
		auto sumo = [&](ll t) {
			return (t * (t + 1)) / 2;
		};
		ll cnt = 0;
		while(sumo(cnt) < k) {
			cnt++;
		}
		string ans(n, 'a');
		ans[n - 1 - cnt] = 'b';
		ll ter = sumo(cnt) - k;
		//cerr << ter << '\n';
		ans[n - cnt + ter] = 'b';
		cout << ans << '\n';
	}
	return 0;
}