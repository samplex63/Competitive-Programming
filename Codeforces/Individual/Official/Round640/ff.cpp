#include <bits/stdc++.h>
using namespace std;

#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()

using ll = long long;
using ld = long double;

template<class T> bool cmn(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool cmx(T &a, T b) { return a < b ? (a = b, true) : false; }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--) {
		int z, o, t;
		cin >> z >> o >> t;
		if(z == 0 && o == 0) {
			cout << string(t + 1, '1') << '\n';
			continue;
		}
		cout << string(z + 1, '0');
		if(o == 0) {
			cout << '\n';
			continue;
		}
		cout << 1;
		bool flag = false;
		if((o - 1) & 1) {
			flag = true;
			o--;
		}
		string ok = "";
		while(sz(ok) < o - 1) ok += "01";
		cout << ok << string(t, '1');
		if(flag) cout << 0;
		cout << '\n';
	}
	return 0;
}