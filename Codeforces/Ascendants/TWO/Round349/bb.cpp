#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

template<class T> bool uin(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool uax(T &a, T b) { return a < b ? (a = b, true) : false; }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<int> vec(n);
	for(int& x: vec) cin >> x;
	sort(all(vec));
	reverse(all(vec));
	ll sum = 0;
	for(int i = 1; i < n; ++i) sum += vec[i];
	ll req = 0;
	if(sum <= vec[0]) {
		req = vec[0] - sum + 1;
	}
	cout << req << '\n';
	return 0;
}