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
		LLI n, b;
		cin >> n >> b;
		vector<LLI> vecp(n);
		vector<LLI> vecw(n);
		vector<LLI> vech(n);

		for(int i = 0; i < n; ++i) {
			cin >> vecw[i] >> vech[i] >> vecp[i];
		}

		LLI ans = INT_MIN;

		for(int i = 0; i < n; ++i)  {
			if(vecp[i] <= b) {
				ans = max(ans, vech[i] * vecw[i]);
			}
		}

		(ans == INT_MIN)? cout << "no tablet\n": cout << ans << '\n';
	}
	return 0;
}