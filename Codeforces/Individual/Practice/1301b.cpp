#include <bits/stdc++.h>
using namespace std;

#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()

using ll = long long;
using ld = long double;

template<class T> bool cmn(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool cmx(T &a, T b) { return a < b ? (a = b, true) : false; }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--) {
		int mn = 2e9 , mx = -2e9;
		int n;
		cin >> n;
		vector<int> arr(n);
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}
		for(int i = 0; i < n; i++){
			if(i > 0 && arr[i] == -1 && arr[i - 1] != -1) {
				cmn(mn , arr[i - 1]);
				cmx(mx , arr[i - 1]);
			}
			if(i < n - 1 && arr[i] == - 1 && arr[i + 1] != -1) {
				cmn(mn , arr[i + 1]);
				cmx(mx , arr[i + 1]);
			}
		}
		int res = (mx + mn) / 2;
		int ans = 0;
		for(int i = 0; i < n; i++){
			if(arr[i] == -1) arr[i] = res;
			if(i > 0) ans = max(ans,abs(arr[i] - arr[i - 1]));
		}
		cout << ans << ' ' << res << '\n';
	}
	return 0;
}