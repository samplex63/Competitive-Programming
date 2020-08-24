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
	vi ans(4);
	string go = "RBYG";
	string inp;
	cin >> inp;
	int n = sz(inp);
	for(int i = 0; i < n; ++i) {
		if(inp[i] != '!') {
			int ind = go.find(inp[i]);
			for(int j = i + 4; j < n; j += 4) {
				if(inp[j] == '!') {
					inp[j] = inp[i];
					ans[ind]++;
				}
			}
			for(int j = i - 4; j >= 0; j -= 4) {
				if(inp[j] == '!') {
					inp[j] = inp[i];
					ans[ind]++;
				}
			}
		}
	}
	for(int i = 0; i < 4; ++i) cout << ans[i] << ' ';
	return 0;
}