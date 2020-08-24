#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	cin >> s;
	int len = (int) s.size();
	int ans = ceil((double) len / 2);
	if(len & 1) {
		if(count(s.begin(), s.end(), '1') == 1) ans--;
	}

	if(s == "0") ans = 0;

	cout << ans << '\n';

	return 0;
}