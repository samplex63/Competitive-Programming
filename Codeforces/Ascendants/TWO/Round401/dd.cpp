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
	int n;
	cin >> n;
	vector<string> vec(n);
	for(int i = 0; i < n; ++i) cin >> vec[i];
	auto comp = [&](const string& a, const string& b) {
		if(a > b) {
			for(int i = 0; i < min(sz(a), sz(b)); ++i) {
				if(a[i] != b[i]) {
					return a.substr(0, i);
				}
			}
			return b;
		}
		return a;
	};
	for(int i = n - 2; i >= 0; --i) {
		vec[i] = comp(vec[i], vec[i + 1]);
	}
	for(int i = 0; i < n; ++i) {
		cout << vec[i] << '\n';
	}
	return 0;
}