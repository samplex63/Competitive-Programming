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
	string inp, a, b, rev;
	cin >> inp >> a >> b;
	rev = inp;
	reverse(rev.begin(), rev.end());
	int ans = 1;
	int af = search(inp.begin(), inp.end(), a.begin(), a.end()) - inp.begin();
	auto bf = search(inp.begin() + af + sz(a), inp.end(), b.begin(), b.end());
	if(bf != inp.end()) {
		ans = 3;
	}
	af = search(rev.begin(), rev.end(), a.begin(), a.end()) - rev.begin();
	bf = search(rev.begin() + af + sz(a), rev.end(), b.begin(), b.end());
	if(bf != rev.end()) {
		ans++;
	}
	if(ans == 1) cout << "fantasy";
	else if(ans == 2) cout << "backward";
	else if(ans == 3) cout << "forward";
	else cout << "both";
	cout << '\n';
	return 0;
}