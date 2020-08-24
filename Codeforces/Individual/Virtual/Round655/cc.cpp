#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

template<class T> bool uin(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool uax(T &a, T b) { return a < b ? (a = b, true) : false; }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		vector<int> vec(n);
		for(int i = 0; i < n; ++i) {
			cin >> vec[i];
		}
		int id1 = -1, id2 = -1;
		for(int i = 0; i < n; ++i) {
			if(vec[i] != i + 1) {
				id1 = i;
				break;
			}
		}
		for(int i = n - 1; i >= 0; --i) {
			if(vec[i] != i + 1) {
				id2 = i;
				break;
			}
		}
		if(id1 == -1) {
			cout << 0 << '\n';
			continue;
		}
		bool flag = true;
		for(int i = id1; i <= id2; ++i) {
			if(vec[i] == i + 1) {
				flag = false;
				break;
			}
		}
		if(!flag) cout << 2 << '\n';
		else cout << 1 << '\n';
	}
	return 0;
}