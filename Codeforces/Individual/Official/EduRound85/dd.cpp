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
	int tt;
	cin >> tt;
	vector<int> pr;
	auto gen = [&] (int a) {
		pr.clear();
		int cnt = a + 1;
		for(int i = 0; i < 2 * (n - a); ++i) {
			if(i & 1) pr.push_back(cnt++);
			else pr.push_back(a);
		}
	}
	while(tt--) {
		int n, l, r;
		cin >> n >> l >> r;
		int cnt = r - l + 1;
		int cur_era = 1;
		int start = 0;
		while(l - 2 * (n - cur_era) > 0) {
			l -= 2 * (n - cur_era);
			cur_era++;
		}
		int start = l;
		cerr << start << '\n';
		while(cnt > 0) {
			gen(cur_era);
			for(int i = start; i < sz(cur_era) && cnt; ++i) {
				cout << pr[i] << ' ';
				cnt--
			}
			start = 0;
		}
		cout << '\n';
	}
	return 0;
}