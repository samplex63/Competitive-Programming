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
	string inp;
	cin >> inp;
	inp.erase(unique(inp.begin(), inp.end(), [] (auto a, auto b) { return a == b && a == '/'; }), inp.end());
	while(inp.back() == '/' && inp != "/") inp.pop_back();
	cout << inp << '\n';
	return 0;
}