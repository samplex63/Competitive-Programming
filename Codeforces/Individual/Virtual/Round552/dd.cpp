#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
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
	int n, b, a;
	cin >> n >> b >> a;
	vector<int> vec(n);
	for(int i = 0; i < n; ++i) cin >> vec[i];
	int curb = b, cura = a - 1;
	int dist = 1;
	for(int i = 1; i < n; ++i) {
		// cerr << i + 1 << ": " << curb << ' ' << cura << '\n';
		if(vec[i] == 0) {
			if(cura > 0) {
				cura--;
			} else {
				curb--;
			}
		} else {
			if(cura >= a) {
				cura--;
			} else {
				if(curb == 0) {
					cura--;
				} else {
					curb--;
					cura++;
				}
			}
		}
		dist = i + 1;
		if(cura == 0 && curb == 0) {
			break;
		}
	}
	cout << dist << '\n';
	return 0;
}