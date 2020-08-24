#include<bits/stdc++.h>
using namespace std;

#define ULL unsigned long long int
#define LL long long int

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unsigned int t, m, n, rx, ry, inplen;
	pair<int, int> locat;
	string inp;

	cin >> t;
	for(int k = 1; k <= t; ++k) {
		cout << "Case " << k << ": ";
		locat.first = 0;
		locat.second = 0;
		cin >> m >> n >> rx >> ry >> inplen >> inp;
		for(auto x: inp) {
			if(x == 'L') {
				locat.first--;
			}
			else if(x == 'U') {
				locat.second++;
			}
			else if(x == 'R') {
				locat.first++;
			}
			else if(x == 'D') {
				locat.second--;
			}
		}
		if(locat.first < 0 || locat.first > m || locat.second < 0 || locat.second > n) {
			cout << "DANGER\n";
		}
		else if(locat.first == rx && locat.second == ry) {
			cout << "REACHED\n";
		}
		else
			cout << "SOMEWHERE\n";
	}
	return 0;
}