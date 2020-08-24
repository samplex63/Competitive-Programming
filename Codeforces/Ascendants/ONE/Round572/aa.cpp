#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int) (x).size()

typedef long long ll;
typedef long double ld;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	string s;
	cin >> n >> s;

	int z = 0, o = 0;
	for(int i = 0; i < n; ++i) {
		if(s[i] == '0') z++;
		else o++;
	}

	if(z == o) {
		cout << "2\n";
		for(int i = 0; i < n - 1; ++i) {
			cout << s[i];
		}
		cout << ' ' << s.back() << '\n';
	} else {
		cout << "1\n";
		cout << s << '\n';
	}
	return 0;
}