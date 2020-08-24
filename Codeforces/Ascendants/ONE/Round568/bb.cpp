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
	while(n--) {
		string s1, s2;
		cin >> s1 >> s2;
		int cnt1 = 1;
		vector<int> vec1, vec2;
		string s1s = "", s2s = "";
		for(int i = 0; i < sz(s1) - 1; ++i) {
			if(s1[i + 1] != s1[i]) {
				vec1.push_back(cnt1);
				s1s.push_back(s1[i]);
				cnt1 = 1;
			} else {
				cnt1++;
			}
		}
		vec1.push_back(cnt1);
		s1s.push_back(s1.back());
		cnt1 = 1;
		for(int i = 0; i < sz(s2) - 1; ++i) {
			if(s2[i + 1] != s2[i]) {
				vec2.push_back(cnt1);
				s2s.push_back(s2[i]);
				cnt1 = 1;
			} else {
				cnt1++;
			}
		}
		vec2.push_back(cnt1);
		s2s.push_back(s2.back());
		if(sz(vec1) != sz(vec2)) {
			cout << "NO\n";
		}
		else {
			bool flag = true;
			for(int i = 0; i < sz(vec1); ++i) {
				if(vec1[i] > vec2[i] || s1s[i] != s2s[i]) {
					flag = false;
					break;
				}
			}
			cout << (flag? "YES": "NO") << '\n';
		}
	}
	return 0;
}