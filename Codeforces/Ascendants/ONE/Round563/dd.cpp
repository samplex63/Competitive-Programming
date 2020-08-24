#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int) (x).size()

typedef long long ll;
typedef long double ld;

const int maxn = (int) 1e6 + 10;

void ans(int x, int y) {
	bool arr[maxn] = {true};
	vector<int> pre = {0};
	for(int i = 1; i < (1 << x); ++i) {
		if(arr[i ^ y]) continue;
		pre.push_back(i);
		arr[i] = true;
	}
	if(pre.size() > 1) {
		cout << (sz(pre) - 1) << '\n';
		for(int i = 1; i < sz(pre); ++i) {
			cout << (pre[i - 1] ^ pre[i]) << ' ';
		}
	} else {
		cout << "0\n";
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int x, y;
	cin >> x >> y;
	ans(x, y);

	return 0;
}