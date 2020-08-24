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
	int n;
	cin >> n;
	vector<int> vec(n);
	for(int i = 0; i < n; ++i) {
		cin >> vec[i];
	}
	string cur;
	cin >> cur;
	ll bob_cur = 0;
	for(int i = 0; i < n; ++i) {
		if(cur[i] == 'B') {
			bob_cur += vec[i];
		}
	}
	ll maxi = bob_cur;
	ll bob_cur_sub = bob_cur;
	for(int i = 0; i < n; ++i) {
		if(cur[i] == 'B') {
			bob_cur -= vec[i];
		} else {
			bob_cur += vec[i];
			cmx(maxi, bob_cur);
		}
	}
	bob_cur = bob_cur_sub;
	for(int i = n - 1; i >= 0; --i) {
		if(cur[i] == 'B') {
			bob_cur -= vec[i];
		} else {
			bob_cur += vec[i];
			cmx(maxi, bob_cur);
		}
	}
	cout << maxi << '\n';
	return 0;
}