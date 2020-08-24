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
		vector<int> vec1(n), vec2(n);
		bool flag = true;
		for(int i = 0; i < n; i++) {
			cin >> vec1[i] >> vec2[i];
			if(vec2[i] > vec1[i]) {
				flag = false;
			}
		}
		flag &= is_sorted(all(vec1)) && is_sorted(all(vec2));
		// int d = 0;
		for(int i = 0; i < n - 1; ++i) {
			if(vec1[i + 1] - vec1[i] < vec2[i + 1] - vec2[i]) flag = false;
		}
		cout << (flag ? "YES" : "NO") << '\n';
	}
	return 0;
}