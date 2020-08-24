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
	int k;
	cin >> k;
	int ksub = k;
	int x = 5;
	int y = 12;
	vector<int> go{x};
	bool flag = true;
	while(ksub--) {
		if(flag) {
			go.push_back((ksub == 0) ? y : 2 * y);
		} else {
			go.push_back((ksub == 0) ? x : 2 * x);
		}
		flag = !flag;
	}
	for(int i = 0; i < sz(go); ++i) {
		cout << go[i] << '\n';
	}
	return 0;
}