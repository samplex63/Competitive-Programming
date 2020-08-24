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
	vector<int> vec1(n), vec2(n);
	for(int& x: vec1) cin >> x;
	for(int& x: vec2) cin >> x;
	set<int> s1(all(vec1)), s2(all(vec2));
	int m1 = -1, m2 = -1;
	for(int i = 1; i <= n; ++i) {
		if(!s1.count(i)) m1 = i;
		if(!s2.count(i)) m2 = i;
	}
	int pos1 = 0, pos2 = 0;
	vector<int> ans(vec1);
	for(int i = 0; i < n; ++i) {
		if(vec1[i] != vec2[i]) {
			if(m1 == -1) {
				ans[i] = m2;
				pos2 = i;
				break;
			}
			ans[i] = m1;
			m1 = -1;
			pos1 = i;
		}
	}
	auto isVal = [&](const vector<int>& vec) {
		int cnt = 0;
		for(int i = 0; i < n; ++i) {
			cnt += vec[i] != ans[i];
		}
		return cnt == 1;
	};
	if(!isVal(vec1) || !isVal(vec2)) {
		swap(ans[pos1], ans[pos2]);
	}
	for(int i = 0; i < n; ++i) cout << ans[i] << ' ';
	return 0;
}