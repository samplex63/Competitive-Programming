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
	vector<int> vec(n);
	for(int& x: vec) cin >> x;
	ll sum = accumulate(all(vec), 0ll);
	int tot = count_if(all(vec), [&](int x) { return x % 2 == 0; });
	if(sum & 1) {
		cout << "First\n";
	} else {
		if(tot == n) {
			cout << "Second\n";
		} else {
			cout << "First\n";
		}
	}
	return 0;
}