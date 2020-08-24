#include <bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "The value of \"" << #x << "\" is " << x << '\n'
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif

	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;

		int arr[6] = {};

		for(int i = 0; i < n; ++i) {
			string s;
			cin >> s;
			for(auto x: s) {
				if(x == 'c') {
					arr[0]++;
				} else if(x == 'e') {
					arr[1]++;
				} else if(x == 'o') {
					arr[2]++;
				} else if(x == 'f') {
					arr[3]++;
				} else if(x == 'd') {
					arr[4]++;
				} else if(x == 'h') {
					arr[5]++;
				}
			}
		}
		arr[0] /= 2;
		arr[1] /= 2;
		cout << *min_element(arr, arr + 6) << '\n';
	}
	return 0;
}