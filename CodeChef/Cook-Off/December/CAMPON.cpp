#include <bits/stdc++.h>
using namespace std;

typedef long long int LL;
typedef unsigned long long int ULL;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;

	cin >> t;
	while(t--) {
		int d, q;
		cin >> d;
		std::vector< pair<int, int> > vec(d);
		for(int i = 0; i < d; ++i) {
			cin >> vec[i].first >> vec[i].second;
		}

		cin >> q;
		for(int j = 0; j < q; ++j) {
			int days, req, ans = 0;
			cin >> days >> req;
			for(int i = 0; i < d; ++i) {
				if(vec[i].first > days) {
					break;
				}
				ans += vec[i].second;
			}
			if(req <= ans) {
				cout << "Go Camp" << endl;
			}
			else {
				cout << "Go Sleep" << endl;
			}
		}
	}
	return 0;
}