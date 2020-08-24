#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> com = {1, 2, 3, 4, 5, 6, 7, 6, 5, 4, 3, 2, 1};
	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		vector<int> vec(n);
		for(int i = 0; i < n; ++i) {
			cin >> vec[i];
		}

		vector<int> vec2(vec);
		vec2.erase(unique(vec2.begin(), vec2.end()), vec2.end());
		if(vec2 != com) {
			cout << "no\n";
			continue;
		}
		vec2 = vec;
		reverse(vec2.begin(), vec2.end());
		if(vec2 != vec) {
			cout << "no\n";
			continue;
		}
		cout << "yes\n";

	}

	return 0;
}