#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) (int) (x).size()

typedef long long ll;
typedef long double ld;

typedef pair<int, int> pi;
typedef pair<ll, ll> pl;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<ll> vec(n);
	for(int i = 0; i < n; ++i) {
		cin >> vec[i];
	}
	sort(vec.begin(), vec.end());
	ll tot = accumulate(vec.begin(), vec.end() - 1, 0ll);
	if(vec.back() > tot) {
		cout << "NO\n";
		return 0;
	}
	if((tot + vec.back()) & 1ll) {
		cout << "NO\n";
	} else {
		cout << "YES\n";
	}
	return 0;
}