#include <bits/stdc++.h>
using namespace std;

#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()

using ll = long long;
using ld = long double;

template<class T> bool cmn(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool cmx(T &a, T b) { return a < b ? (a = b, true) : false; }

vector<int> fc(int x) {
	vector<int> ret{1};
	for(int i = 2; i * i <= x; ++i) {
		if(x % i == 0) {
			ret.push_back(i);
			if(x / i != i) ret.push_back(x / i);
		}
	}
	// sort(all(ret));
	// ret.pop_back();
	return ret;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		vector<int> vec(n + 1);
		for(int i = 1; i <= n; ++i) cin >> vec[i];
		vector<int> ans(n + 1);
		ans[1] = 1;
		for(int i = 2; i <= n; ++i) {
			vector<int> fact = fc(i);
			int sub = 1;
			for(int j : fact) {
				if(vec[i] > vec[j]) {
					cmx(sub, ans[j] + 1);
				}
			}
			ans[i] = sub;
		}
		cout << *max_element(all(ans)) << '\n';
	}
	return 0;
}