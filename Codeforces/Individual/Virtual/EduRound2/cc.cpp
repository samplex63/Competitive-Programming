#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) (int) (x).size()

typedef long long ll;
typedef long double ld;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string inp;
	cin >> inp;
	vector<int> ha(26, 0);
	for(int i = 0; i < sz(inp); ++i) {
		ha[inp[i] - 'a']++;
	}
	int odd_cnt = 0;
	for(int i = 0; i < 26; ++i) {
		odd_cnt += ha[i] & 1;
	}
	while(odd_cnt > 1) {
		for(int i = 25; i >= 0; --i) {
			if(ha[i] & 1) {
				for(int j = 0; j < 26; ++j) {
					if(ha[j] & 1) {
						ha[i]--;
						ha[j]++;
						odd_cnt -= 2;
						break;
					}
				}
			}
		}
	}
	assert(odd_cnt < 2);
	if(sz(inp) & 1) {
		string o;
		int od_ind = 0;
		for(int i = 0; i < 26; ++i) {
			if(ha[i] & 1) od_ind = i;
		}
		for(int i = 0; i < 26; ++i) {
			// if(i == od_ind) continue;
			o += string(ha[i] / 2, i + 'a');
		}
		cout << o;
		cout <<  (char) (od_ind + 'a');
		reverse(o.begin(), o.end());
		cout << o << '\n';
	} else {
		string o;
		for(int i = 0; i < 26; ++i) {
			o += string(ha[i] / 2, i + 'a');
		}
		cout << o;
		reverse(o.begin(), o.end());
		cout << o << '\n';
	}
	return 0;
}