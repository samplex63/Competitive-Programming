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
		int n, k;
		cin >> n >> k;
		vector<int> vec(n);
		for(int i = 0; i < n; ++i) cin >> vec[i];
		vector<int> freq(2 * k + 2);
		map<int, int> sums;
		for(int i = 0; i < n / 2; ++i) {
			if(vec[i] > vec[n - i - 1]) swap(vec[i], vec[n - i - 1]);
			freq[vec[i] + 1]++;
			freq[vec[n - i - 1] + k + 1]--;
			sums[vec[i] + vec[n - i - 1]]++;
		}
		for(int i = 1; i < sz(freq); ++i) freq[i] += freq[i - 1];
		int ans = INT_MAX;
		for(auto x: sums) cmn(ans, freq[x.first] - x.second + 2 * (n / 2 - freq[x.first]));
		cout << min(n / 2, ans) << '\n';
	}
	return 0;
}