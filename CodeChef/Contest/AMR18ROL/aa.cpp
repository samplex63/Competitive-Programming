#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int) (x).size()

typedef long long ll;
typedef long double ld;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--) {
		int cnt = 0;
		for(int i = 0; i < 100; ++i) {
			int x;
			cin >> x;
			if(x <= 30) cnt++;
		}
		if(cnt >= 60) cout << "yes\n";
		else cout << "no\n";
	}
	return 0;
}