#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

template<class T> bool cmn(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool cmx(T &a, T b) { return a < b ? (a = b, true) : false; }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt = 100;
	cout << tt << '\n';
	for(int i = 0; i < tt; ++i) {
		cout << "50 50\n";
		for(int j = 0; j < 50; ++j) {
			cout << string(50, 'G') << '\n';
		}
	}
	return 0;
}