#include <bits/stdc++.h>
using namespace std;

bool isBett(const vector<int>& a, const vector<int>& b) {
	if((a[0] >= b[0] && a[1] >= b[1] && a[2] >= b[2]) && (a[0] > b[0] || a[1] > b[1] || a[2] > b[2])) {
		return true;
	}
	return false;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		vector<vector<int>> vec(3, vector<int>(3));
		for(int i = 0; i < 3; ++i) {
			for(int j = 0; j < 3; ++j) {
				cin >> vec[i][j];
			}
		}
		bool flag = true;
		flag &= (isBett(vec[0], vec[1]) || isBett(vec[1], vec[0]));
		flag &= (isBett(vec[0], vec[2]) || isBett(vec[2], vec[0]));
		flag &= (isBett(vec[2], vec[1]) || isBett(vec[1], vec[2]));
		cout << (flag? "yes": "no") << '\n';
	}
	return 0;
}