#include <bits/stdc++.h>
using namespace std;

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
	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		string inp;
		cin >> inp;
		bool flag = false;
		string ans1 = "", ans2 = "";
		for(int i = 0; i < n; i++) {
			if(inp[i] == '2') {
				if(!flag) {
					ans1 += "1";
					ans2 += "1";
				} else {
					ans1 += "0";
					ans2 += "2";
				}
			} else if(inp[i] == '1') {
				if(!flag) {
					flag = true;
					ans1 += "1";
					ans2 += "0";
				} else {
					ans1 += "0";
					ans2 += "1";
				}
			} else {
				ans1 += "0";
				ans2 += "0";
			}
		}
		cout << ans1 << '\n' << ans2 << '\n';
	}
	return 0;
}