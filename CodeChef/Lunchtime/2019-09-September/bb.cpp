#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) (int) (x).size()

typedef long long ll;
typedef long double ld;

typedef pair<int, int> pi;
typedef pair<ll, ll> pl;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		bool flag = false;
		int sc1, sc2;
		for(int nn = 0; nn < n; ++nn) {
			int type, s1, s2;
			cin >> type >> s1 >> s2;
			if(type == 1) {
				cout << "YES\n";
				flag = true;
			} else {
				if(s1 == s2) {
					cout << "YES\n";
					flag = true;
				} else {
					if(!flag) {
						cout << "NO\n";
					} else {
						int m1 = max(sc1, sc2);
						if((s1 < m1 || s2 < m1) && (s2 >= m1 || s1 >= m1)) {
							cout << "YES\n";
							flag = true;
						} else {
							cout << "NO\n";
							flag = false;
						}
					}
				}
			}
			sc1 = s1;
			sc2 = s2;
		}
	}
	return 0;
}