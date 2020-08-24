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
	int n, l, k;
	string inp;
	cin >> n >> l >> k >> inp;
	sort(all(inp));
	int eqind = k - 1;
	while(eqind >= 0 && inp[eqind] == inp[k - 1]) {
		eqind--;
	}
	int cur = 0;
	vector<string> vec(n);
	for(int i = 0; i < n; ++i) {
		if(i > eqind && i < k) {
			int sub = i;
			while(sz(vec[k - 1]) < l) {
				while(sub >= 0 && vec[k - 1].back() == vec[sub].back()) {
					sub--;
				}
				sub++;
				while(sub < k) {
					vec[sub++].push_back(inp[cur++]);
				}
				sub--;
			}
			i = k - 1;
		} else {
			vec[i].push_back(inp[cur++]);
		}
	}
	for(int i = 0; i < n; ++i) {
		while(sz(vec[i]) < l) {
			vec[i].push_back(inp[cur++]);
		}
	}
	for(auto x: vec) cout << x << '\n';
	return 0;
}
