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
	vector<ld> vec(n);
	for(int i = 0; i < n; ++i) {
		cin >> vec[i];
	}

	ll sum = 0;
	for(int i = 0; i < n; ++i) {
		sum += ceil(vec[i]);
	}
	for(int i = 0; i < n; ++i) {
		if(sum > 0ll)
			cout << floor(vec[i]) << '\n';
		else {
			if(ceil(vec[i]) == 0ll) cout << 0 << '\n';
			else cout << ceil(vec[i]) << '\n';
		}
		if(ceil(vec[i]) != floor(vec[i])) sum--;
	}
	return 0;
}