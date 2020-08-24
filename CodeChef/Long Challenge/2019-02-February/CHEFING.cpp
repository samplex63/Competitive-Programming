#include <bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "The value of " << #x << " is " << x << endl

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		int arr[26] = {};
		for(int i = 0; i < n; ++i) {
			string s;
			cin >> s;
			sort(s.begin(), s.end());
			s.erase(unique(s.begin(), s.end()), s.end());
			for(auto x: s) {
                arr[x - 'a']++;
            }
		}
		int ans = 0;
		for(int i = 0; i < 26; ++i) {
			if(arr[i] == n) {
				ans++;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}