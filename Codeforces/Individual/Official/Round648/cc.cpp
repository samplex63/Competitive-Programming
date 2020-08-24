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
	vector<int> vec1(n), vec2(n);
	for(int& x: vec1) cin >> x;
	for(int& x: vec2) cin >> x;
	vector<int> ha(n + 1);
	for(int i = 0; i < n; ++i) ha[vec2[i]] = i + 1;
	map<int, int> mp;
	for(int i = 0; i < n; ++i) mp[(i + 1 - ha[vec1[i]] + n) % n]++;
	cout << max_element(all(mp), [](auto a, auto b) { return a.se < b.se; })->se << '\n';
	return 0;
}