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
	while(tt--) {
		int n;
		cin >> n;
		vector<int> vec(n);
		for(int i = 0; i < n; ++i) cin >> vec[i];
		ll id = 0;
		int in = 0;
		while(in < n) {
			int cur_max = INT_MIN;
			while(in < n && vec[in] < 0) {
				cmx(cur_max, vec[in]);
				in++;
			}
			if(cur_max != INT_MIN) id += cur_max;
			cur_max = 0;
			while(in < n && vec[in] > 0) {
				cmx(cur_max, vec[in]);
				in++;
			}
			id += cur_max;
		}
		cout << id << '\n';
	}
	return 0;
}