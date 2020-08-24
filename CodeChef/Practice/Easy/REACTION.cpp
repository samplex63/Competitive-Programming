#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		int r, c;
		cin >> r >> c;
		vector<vector<int>> vec(r, vector<int>(c));
		for(int i = 0; i < r; ++i) {
			for(int j = 0; j < c; ++j) {
				cin >> vec[i][j];
			}
		}
		bool flag = true;
		// cout << "!" << endl;
		if(vec[0][0] > 1 || vec[0][c - 1] > 1 || vec[r - 1][0] > 1 || vec[r - 1][c - 1] > 1) {
			flag = false;
		}
		// cout << "2" << endl;
		for(int i = 1; i < c - 1; ++i) {
			if(vec[0][i] > 2 || vec[r - 1][i] > 2) {
				flag = false;
			}
		}
		// cout << "3" << endl;
		for(int i = 1; i < r - 1; ++i) {
			if(vec[i][0] > 2 || vec[i][c - 1] > 2) {
				flag = false;
			}
		}
		// cout << "4" << endl;
		for(int i = 1; i < r - 1; ++i) {
			for(int j = 1; j < c - 1; ++j) {
				if(vec[i][j] > 3) {
					flag = false;
				}
			}
		}
		// cout << "5" << endl;
		cout << (flag? "Stable": "Unstable") << '\n';
	}
	return 0;
}