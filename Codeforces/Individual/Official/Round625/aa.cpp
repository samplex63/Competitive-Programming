#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())

using ll = long long;
using ld = long double;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	for(int i = 0; i < n; ++i) {
		cin >> b[i];
	}
	int uni = 0, uni2 = 0;
	for(int i = 0; i < n; ++i) {
		if(a[i] && !b[i]) {
			uni++;
		} else if(!a[i] && b[i]) {
			uni2++;
		} 
	}
	if(uni == 0) {
		cout << -1 << '\n';
	} else {
		cout << (uni2 + uni) / uni << '\n';
	}

	return 0;
}