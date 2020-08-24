#include <bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "The value of \"" << #x << "\" is " << x << '\n'
typedef long long int LLI;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		string inp;
		cin >> inp;
		bool ans = true;
		int len = inp.size();
		bool arr[len] = {};
		
		for(int i = 0; i < len; ++i) {
			if(inp[i] != '.') {
				int num = inp[i] - '0';
				for(int j = max(0, i - num); j <= min(len - 1, i + num); ++j) {
					if(!arr[j]) {
						arr[j] = true;
					} else {
						ans = false;
						break;
					}
				}
				if(!ans) {
					break;
				}
			}
		}
		cout << (ans? "safe\n": "unsafe\n");
	}
	return 0;
}