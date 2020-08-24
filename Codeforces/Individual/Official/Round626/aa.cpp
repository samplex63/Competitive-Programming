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
		for(int i = 0; i < n; ++i) {
			cin >> vec[i];
		}
		int ans1 = -1, ans2, ans3;
		bool flag = false;
		for(int i = 0; i < n; ++i) {
			if(vec[i] & 1) {
				if(!flag) {
					flag = true;
					ans2 = i + 1;
				} else {
					ans1 = 2;
					ans3 = i + 1;
					break;
				}
			} else {
				ans1 = 1;
				ans2 = i + 1;
				break;
			}
		}
		if(ans1 == -1) {
			cout << ans1 << '\n';
		} else if(ans1 == 1) {
			cout << 1 << '\n' << ans2 << '\n';
		} else {
			cout << 2 << '\n' << ans2 << ' ' << ans3 << '\n';
		}
	}
	return 0;
}