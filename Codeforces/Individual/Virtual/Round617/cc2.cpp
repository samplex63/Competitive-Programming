#include <bits/stdc++.h>
using namespace std;

#define sz(x) static_cast<int>((x).size())

using ll = long long;
using ld = long double;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		string inp, one = "LR", two = "UD";
		cin >> inp;
		int pos1 = inp.find(one), val = 1;
		if(pos1 != -1) {
			cout << pos1 + 1 << ' ' << 1 + pos1 + val << '\n';
			continue;
		}
		pos1 = inp.find(two);
		if(pos1 != -1) {
			cout << pos1 + 1 << ' ' << 1 + pos1 + val << '\n';
			continue;
		}
		one = "RL";
		two = "DU";
		pos1 = inp.find(two);
		if(pos1 != -1) {
			cout << pos1 + 1 << ' ' << 1 + pos1 + val << '\n';
			continue;
		}
		pos1 = inp.find(one);
		if(pos1 != -1) {
			cout << pos1 + 1 << ' ' << 1 + pos1 + val << '\n';
			continue;
		}
		val = 3;
		one = "LURD";
		sort(one.begin(), one.end());
		bool flag = false;
		do {
			pos1 = inp.find(one);
			if(pos1 != -1) {
				cout << pos1 + 1 << ' ' << 1 + pos1 + val << '\n';
				flag = true;
				break;
			}
		} while(next_permutation(one.begin(), one.end()));
		if(!flag) {
			cout << "-1\n";
		}
	}
	return 0;
}