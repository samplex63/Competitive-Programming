#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()

using ll = long long;
using ld = long double;
using vi = vector<int>;
using pii = pair<int, int>;

template<class T> bool cmn(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool cmx(T &a, T b) { return a < b ? (a = b, true) : false; }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	string inp;
	cin >> n >> inp;
	int dig = int(log(n) / log(10)) + 1;
	
	ll mul = 1, ans = 0;
	while(!inp.empty()) {
		int l = sz(inp) - dig;
		cmx(l, 0);
		string go = inp.substr(l);
		ll val = stoll(go);
		
		if(val >= n) {
			string next = inp.substr(l + 1);
			ans += stoll(next) * mul;
			if(stoll(next) == 0){
				inp.pop_back();
			} else {
				int nos = sz(next);
				for(int x = 0; x < n; x++) {
					if(next[x] == '0') {
						nos--;
					} else {
						break;
					}
				}
				for(int i = 0; i < nos; ++i) inp.pop_back();
			}
			// for(int i = 0; i < sz(next); ++i) inp.pop_back();
		} else {
			ans += val * mul;
			if(val == 0) {
				inp.pop_back();
			} else {
				int nos = sz(go);
				for(int x = 0; x < n; x++) {
					if(go[x] == '0') {
						nos--;
					} else {
						break;
					}
				}
				for(int i = 0; i < nos; ++i) inp.pop_back();
			}
		}
		mul *= n;
	}
	cout << ans << '\n';
	return 0;
}