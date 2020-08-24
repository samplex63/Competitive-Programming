#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

template<class T> bool uin(T& a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool uax(T& a, T b) { return a < b ? (a = b, true) : false; }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	if(n == 1) {
		cout << "1 1\n";
		return 0;
	}
	for(int i = 1; i < n; i += 2) {
		cout << i << ' ';
	}
	if(n & 1) {
		cout << n << ' ';
	}
	for(int i = n - ((n & 1) ? 2 : 1); i > 0; i -= 2) {
		cout << i << ' ';
	}
	for(int i = 2; i < n; i += 2) {
		cout << i << ' ';
	}
	if(n % 2 == 0) cout << n << ' ';
	for(int i = n - ((n & 1) ? 1 : 2); i > 0; i -= 2) {
		cout << i << ' ';
	}
	cout << n << '\n';
	return 0;
}