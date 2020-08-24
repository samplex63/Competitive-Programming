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
	map<string, int> m;
	int n;
	cin >> n;
	for(int i = 0; i < n; ++i) {
		string s;
		cin >> s;
		m.count(s) ? cout << s << m[s] << '\n' : cout << "OK\n";
		m[s]++;
	}
	return 0;
}