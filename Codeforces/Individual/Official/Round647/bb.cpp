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
		set<int> st;
		vector<int> vec(n);
		for(int i = 0; i < n; ++i) {
			int x;
			cin >> x;
			st.insert(x);
			vec[i] = x;
		}
		set<int> go;
		for(int i = 1; i <= (1 << 10); ++i) {
			go.insert(i);
		}
		for(int i = 0; i < n; ++i) {
			vector<int> erase_these;
			for(int x : go) {
				if(!st.count(x ^ vec[i])) {
					erase_these.push_back(x);
				}
			}
			for(int x : erase_these) {
				go.erase(x);
			}
		}
		if(go.empty()) cout << -1 << '\n';
		else cout << *go.begin() << '\n';
	}
	return 0;
}