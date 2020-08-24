#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

int LCSubStr(string& X, string& Y, int m, int n) {
	vector<vector<int>> LCSuff(m + 1, vector<int>(n + 1, 0));
	int result = 0;
	for (int i=0; i<=m; i++) { 
		for (int j=0; j<=n; j++) { 
			if (i == 0 || j == 0) 
				LCSuff[i][j] = 0; 
			else if (X[i-1] == Y[j-1]) 
			{ 
				LCSuff[i][j] = LCSuff[i-1][j-1] + 1; 
				result = max(result, LCSuff[i][j]); 
			} 
			else LCSuff[i][j] = 0; 
		} 
	} 
	return result; 
} 

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string rgb = "RGB";
	for(int i = 0; i < 700; ++i) {
		rgb += rgb;
	}

	int tt;
	cin >> tt;
	while(tt--) {
		int n, k;
		cin >> n >> k;
		string inp;
		cin >> inp;

		int num = k - LCSubStr(inp, rgb, (int) rgb.size(), (int) inp.size());
		if(num < 0) num = 0;
		cout << num << '\n';
	}

	return 0;
}