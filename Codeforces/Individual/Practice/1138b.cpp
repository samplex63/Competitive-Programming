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

	int n;
	while(cin >> n) {
		string cl, ac;
		cin >> cl >> ac;
		vector<int> vec(n, 0);
		for(int i = 0; i < n; ++i) {
			if(cl[i] == '1' && ac[i] == '1') vec[i] = 3;
			else if(cl[i] == '1' && ac[i] == '0') vec[i] = 2;
			else if(cl[i] == '0' && ac[i] == '1') vec[i] = 1;
		}
		int na = 0, nb = 0, nc = 0, nd = 0;
		for(int i = 0; i < n; ++i) {
			na += vec[i] == 0;
			nb += vec[i] == 1;
			nc += vec[i] == 2;
			nd += vec[i] == 3;
		}
		int a = -1, b = -1, c = -1, d = -1;
		for(int i = 0; i <= nd; ++i) {
			int av = i - nd - nb + n / 2;
			if(av < 0 || av > na) continue;
			for(int j = 0; j <= nb; ++j) {
				int cv = n / 2 - av - i - j;
				if(cv < 0 || cv > nc) continue;
				a = av;
				b = j;
				c = cv;
				d = i;
				break;
			}
			if(a != -1) break;
		}
		if(a == -1) {
			cout << -1 << '\n';
		}
		for(int i = 0; i < n && (a || b || c || d); ++i) {
			if(vec[i] == 0 && a > 0) {
				cout << i + 1 << ' ';
				a--;
			} else if(vec[i] == 1 && b > 0) {
				cout << i + 1 << ' ';
				b--;
			} else if(vec[i] == 2 && c > 0) {
				cout << i + 1 << ' ';
				c--;
			} else if(vec[i] == 3 && d > 0) {
				cout << i + 1 << ' ';
				d--;
			}
		}
		cout << '\n';
	}
	return 0;
}