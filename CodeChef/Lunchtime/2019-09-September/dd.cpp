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
	int tt;
	cin >> tt;
	while(tt--) {
		string s, r;
		cin >> s >> r;
		vector<int> vec(26, 0);
		for(auto x: r) {
			vec[x - 'a']++;
		}
		for(auto x: s) {
			vec[x - 'a']--;
		}
		if(any_of(vec.begin(), vec.end(), [](int x) { return x < 0; })) {
			cout << "Impossible\n";
			continue;
		}
		string ans = "";
		string com(sz(s), s.front());
		for(int i = 0; i < 26; ++i) {
			if((i + 'a') == s.front() && com > s) {
				ans += s;
			}
			for(int j = 0; j < vec[i]; ++j) {
				ans += (i + 'a');
			}
			if((i + 'a') == s.front() && com <= s) {
				ans += s;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}