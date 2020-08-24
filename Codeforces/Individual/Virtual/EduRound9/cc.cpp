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
	int n;
	cin >> n;
	vector<string> vec(n);
	for(int i = 0; i < n; ++i) {
		cin >> vec[i];
	}
	sort(all(vec), [](const string& a, const string& b) { return a + b < b + a; });
	for(int i = 0; i < n; ++i) cout << vec[i];
	return 0;
}