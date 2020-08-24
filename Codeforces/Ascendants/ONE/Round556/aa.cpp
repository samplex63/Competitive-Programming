#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())

typedef long long ll;
typedef long double ld;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, x;
	cin >> n;
	int cnt1 = 0, cnt2 = 0;
	for(int i = 0; i < n; ++i) {
		cin >> x;
		if(x == 1) cnt1++;
		else cnt2++;
	}
	if(cnt1 == 0) {
		for(int i = 0; i < n; ++i) {
			cout << 2 << ' ';
		}
		cout << '\n';
		return 0;
	}
	// cnt1--;
	if(cnt2 == 0) {
		for(int i = 0; i < n; ++i) {
			cout << 1 << ' ';
		}
		cout << '\n';
		return 0;
	}
	cnt1--;
	cnt2--;
	cout << "2 1";
	while(cnt2--) cout << ' ' << 2;
	while(cnt1--) cout << ' ' << 1;
	cout << '\n';
	return 0;
}