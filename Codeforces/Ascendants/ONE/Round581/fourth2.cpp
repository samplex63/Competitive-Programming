#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	cin >> s;
	int tot0 = count(s.begin(), s.end(), '0');
	int tot1 = count(s.begin(), s.end(), '1');

	int cnt0 = 0, cnt1 = 0;
	for(int i = 0; i < (int) s.size(); ++i) {
		if(s[i] == '0') cnt0++;
		else break;
	}

	for(int i = (int) s.size() - 1; i >= 0; --i) {
		if(s[i] == '1') cnt1++;
		else break;
	}

	int longest = max(cnt0 + tot1, cnt1 + tot0);

	int times = (int) s.size() - longest;
	string ans = "";
	while((int) ans.size() < times) ans += "1";
	while(ans.size() < s.size()) ans += "0";

	cout << ans << '\n';
	return 0;
}