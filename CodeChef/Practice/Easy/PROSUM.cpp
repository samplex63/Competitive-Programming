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
		int n;
		cin >> n;

		LLI noOf2 = 0, moreThan2 = 0;
		for(int i = 0; i < n; ++i) {
			int x;
			cin >> x;
			if(x > 2) {
				++moreThan2;
			}
			else if(x == 2) {
				++noOf2;
			}
		}
		cout << (moreThan2 * (moreThan2 - 1) / 2 + noOf2 * moreThan2) << '\n';
	}
	return 0;
}