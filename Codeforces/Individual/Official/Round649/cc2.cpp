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
	int n;
	cin >> n;
	vector<int> vec(n);
	for(int& x: vec) cin >> x;
	vector<int> ans(n, -1);
	set<int> st(all(vec));
	for(int i = 1; i < n; ++i) {
		if(vec[i] != vec[i - 1]) {
			ans[i] = vec[i - 1];
		}
	}
	for(int i = 0; i < int(1e5 + 10); ++i) {
		if(st.count(i)) st.erase(i);
		else st.insert(i);
	}
	for(int i = 0; i < n; ++i) if(ans[i] == -1) {
		ans[i] = *st.begin();
		st.erase(st.begin());
	}
	for(int i = 0; i < n; ++i) {
		cout << ans[i] << ' ' ;
	}
	cout << '\n';
	return 0;
}