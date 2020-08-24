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
	int m, n;
	cin >> m >> n;
	vector<int> is_correct(n);
	auto ask = [](int val) {
		cout << val << endl;
		int ret;
		cin >> ret;
		return ret;
	};
	for(int i = 0; i < n; ++i) {
		int val = ask(1);
		if(val == 0) {
			return 0;
		}
		is_correct[i] = val;
	}
	int l = 2, r = m;
	int ind = 0;
	while(true) {
		int mid = (l + r) / 2;
		int val = ask(mid);
		val *= is_correct[ind];
		if(val == 0) {
			return 0;
		} else if(val == 1) {
			l = mid + 1;
		} else {
			r = mid;
		}
		ind = (ind + 1) % n;
	}
	return 0;
}