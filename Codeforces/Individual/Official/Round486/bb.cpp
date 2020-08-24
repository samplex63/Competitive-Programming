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
	for(int i = 0; i < n; i++) {
		cin >> vec[i];
	}
	sort(all(vec), [](const string& a, const string& b) { return sz(a) < sz(b); });
	for(int i = 1; i < n; ++i) {
		if(vec[i].find(vec[i - 1]) == string::npos) {
			cout << "NO\n";
			return 0;
		}
	}
	cout << "YES\n";
	for(int i = 0; i < n; ++i) {
		cout << vec[i] << '\n';
	}
	return 0;
}