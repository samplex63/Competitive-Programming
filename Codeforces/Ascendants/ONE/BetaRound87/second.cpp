#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;
	int wolfs = 0;
	vector<string> v;
	for(int i = 0; i < n; ++i) {
		string s;
		cin >> s;
		wolfs += count(s.begin(), s.end(), 'W');
		v.push_back(s);
	}

	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < m; ++j) if(v[i][j] == 'W') {
			int l = max(0, j - 1), u = max(0, i - 1);
			int r = min(m - 1, j + 1), d = min(n - 1, i + 1);

			if(v[i][l] != 'P' && v[i][r] != 'P' && v[u][j] != 'P' && v[d][j] != 'P') {
				wolfs--;
			}
		}
	}

	cout << wolfs << '\n';
	return 0;
}