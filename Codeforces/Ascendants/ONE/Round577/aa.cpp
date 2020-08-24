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
	int n, m;
	cin >> n >> m;
	vector<string> vec(n);
	for(int i = 0; i < n; ++i) {
		cin >> vec[i];
	}
	vector<int> tot(m);
	for(int i = 0; i < m; ++i) {
		cin >> tot[i];
	}

	int ans = 0;
	for(int i = 0; i < m; ++i) {
		vector<int> ha(26, 0);
		for(int j = 0; j < n; ++j) {
			ha[vec[j][i] - 'A']++;
		}
		ans += (*max_element(ha.begin(), ha.end()) * tot[i]);
	}
	cout << ans << '\n';
	return 0;
}