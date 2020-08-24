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
		int n1, n2, n3;
		cin >> n1 >> n2 >> n3;
		vector<vector<int>> vec(3);
		vec[0].resize(n1);
		vec[1].resize(n2);
		vec[2].resize(n3);
		for(int i = 0; i < n1; i++) cin >> vec[0][i];
		for(int i = 0; i < n2; i++) cin >> vec[1][i];
		for(int i = 0; i < n3; i++) cin >> vec[2][i];
		for(int i = 0; i < 3; i++) sort(all(vec[i]));

		vector<int> prm{0, 1, 2};
		ll ans = (ll) 9e18;
		auto eval = [&](ll a, ll b, ll c) {
			return (a - b) * (a - b) + (b - c) * (b - c) + (c - a) * (c - a);
		};
		do {
			vector<int> v1 = vec[prm[0]], v2 = vec[prm[1]], v3 = vec[prm[2]];
			for(int i = 0; i < sz(v1); i++) {
				auto it1 = upper_bound(all(v2), v1[i]);
				if(it1 != v2.begin()) it1--;
				auto it2 = lower_bound(all(v3), v1[i]);
				if(it2 == v3.end()) it2--;
				cmn(ans, eval(v1[i], *it1, *it2));
			}
		} while(next_permutation(all(prm)));
		cout << ans << '\n';
	}
	return 0;
}