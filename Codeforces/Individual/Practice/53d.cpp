#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())

typedef long long ll;
typedef long double ld;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifdef LOCAL
	freopen("in", "r", stdin);
	#endif

	int n;
	cin >> n;
	vector<int> vec1(n), vec2(n);
	for(int i = 0; i < n; ++i) cin >> vec1[i];
	for(int i = 0; i < n; ++i) cin >> vec2[i];

	//~cerr << 1 << endl;
	vector<int> ans;
	for(int i = 0; i < n; ++i) {
		int j = i;
		while(j < n && vec1[i] != vec2[j]) j++;
		while(j > i) {
			swap(vec2[j - 1], vec2[j]);
			ans.push_back(j);
			j--;
		}
	}
	cout << sz(ans) << '\n';
	for(int i = 0; i < sz(ans); ++i) {
		cout << ans[i] << ' ' << ans[i] + 1 << '\n';
	}
	return 0;
}