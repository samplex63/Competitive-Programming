#include <bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "The value of \"" << #x << "\" is " << x << '\n'
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif

	int n;
	cin >> n;
	string s;
	cin >> s;

	int ans = 0;
	int i = n - 1;
	while(s[i] == '0') {
		ans++;
		i--;
	}

	cout << ans << '\n';

	return 0;
}