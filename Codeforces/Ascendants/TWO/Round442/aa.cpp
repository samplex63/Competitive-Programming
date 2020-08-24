#include <bits/stdc++.h>
using namespace std;

#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second

using ll = long long;
using ld = long double;

template<class T> bool cmn(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool cmx(T &a, T b) { return a < b ? (a = b, true) : false; }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	cin >> s;
	vector<string> che{"Danil", "Olya", "Slava", "Ann", "Nikita"};
	int go = 0, pos = 0;
	for(int i = 0; i < sz(che); ++i) {
		string ssub = s;
		while((pos = ssub.find(che[i])) != string::npos) {
			go++;
			ssub = ssub.substr(pos + sz(che[i]));
		}
	}
	cout << (go == 1 ? "YES\n" : "NO\n");
	return 0;
}