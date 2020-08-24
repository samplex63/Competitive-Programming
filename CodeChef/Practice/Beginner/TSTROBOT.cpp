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
		int n, start;
		cin >> n >> start;

		string inp;
		cin >> inp;

		vector<bool> pos(400, false);
		int curPos = 200;
		pos[curPos] = true;
		for(auto x: inp) {
			if(x == 'L') {
				pos[--curPos] = true;
			} else {
				pos[++curPos] = true;
			}
		}
		cout << count(pos.begin(), pos.end(), true) << '\n';
	}
	return 0;
}