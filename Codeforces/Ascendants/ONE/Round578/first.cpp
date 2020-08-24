#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	string inp;
	cin >> inp;
	vector<bool> vec(10, false);
	for(int i = 0; i < n; ++i) {
		if(inp[i] == 'L') {
			for(int j = 0; j < 10; ++j) {
				if(!vec[j]) {
					vec[j] = true;
					break;
				}
			}
		} else if(inp[i] == 'R') {
			for(int j = 9; j >= 0; --j) {
				if(!vec[j]) {
					vec[j] = true;
					break;
				}
			}
		} else {
			int num = inp[i] - '0';
			vec[num] = false;
		}
	}
	for(int i = 0; i < 10; ++i) {
		cout << vec[i];
	}
	cout << '\n';
	return 0;
}