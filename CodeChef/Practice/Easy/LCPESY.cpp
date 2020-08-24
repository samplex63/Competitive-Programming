#include <bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "The value of \"" << #x << "\" is " << x << '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		string s1, s2;
		int arr1[65] = {}, arr2[65] = {};
		cin >> s1 >> s2;

		for(auto x: s1) {
			if(x >= 'a' && x <= 'z') {
				arr1[x - 'a']++;
			}
			else if(x >= 'A' && x <= 'Z') {
				arr1[26 + x - 'A']++;
			}
			else {
				arr1[52 + x - '0']++;
			}
		}
		for(auto x: s2) {
			if(x >= 'a' && x <= 'z') {
				arr2[x - 'a']++;
			}
			else if(x >= 'A' && x <= 'Z') {
				arr2[26 + x - 'A']++;
			}
			else {
				arr2[52 + x - '0']++;
			}
		}
		long long int ans = 0;
		for(int i = 0; i < 65; ++i) {
			ans += min(arr1[i], arr2[i]);
		}
		cout << ans << '\n';
	}
	return 0;
}