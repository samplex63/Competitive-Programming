#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int) (x).size()

typedef long long ll;
typedef long double ld;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	cin >> n >> m;
	vector<string> vec(n);
	for(int i = 0; i < n; ++i) {
		cin >> vec[i];
	}
	bool flag = false;
	for(int i = 1; i < n - 1; ++i) {
		for(int j = 1; j < m - 1; ++j) {
			if(vec[i][j] == '*') {
				if(vec[i - 1][j] == '*' && vec[i + 1][j] == '*' && vec[i][j - 1] == '*' && vec[i][j + 1] == '*') {
					// cout << i << ' ' << j << endl;
					int isub = i - 1, jsub = j - 1;
					while(isub >= 0 && vec[isub][j] == '*') {
						vec[isub--][j] = '.';
					}
					// cout << i << ' ' << j << endl;

					while(jsub >= 0 && vec[i][jsub] == '*') {
						vec[i][jsub--] = '.';
					}
					// cout << i << ' ' << j << endl;

					isub = i + 1, jsub = j;

					while(isub < n && vec[isub][j] == '*') {
						vec[isub++][j] = '.';
					}
					// cout << i << ' ' << j << endl;

					while(jsub < m && vec[i][jsub] == '*') {
						vec[i][jsub++] = '.';
					}
					// cout << i << ' ' << j << endl;

					flag = true;
					// cout << i << ' ' << j << endl;

					break;
				}
			}
		}
		if(flag) break;
	}
	// for(int i = 0; i < n; ++i) {
	// 	cerr << vec[i] << '\n';
	// }
	if(flag) {
		bool f2 = true;
		for(int i = 0; i < n; ++i) {
			if(find(vec[i].begin(), vec[i].end(), '*') != vec[i].end()) {
				f2 = false;
				break;
			}
		}
		cout << (f2? "YES\n": "NO\n");
	} else {
		cout << "NO\n";
	}
	return 0;
}