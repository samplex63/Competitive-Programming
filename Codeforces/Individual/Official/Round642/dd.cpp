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
		int n;
		cin >> n;
		vector<int> vec(n);
		int cnt = 1;
		auto cmp = [](pair<int, int> a, pair<int, int> b) {
			if(a.second - a.first == b.second - b.first) return a.first < b.first;
			return a.second - a.first > b.second - b.first;
		};
		set<pair<int, int>, decltype(cmp)> s(cmp);
		s.insert({0, n - 1});
		while(!s.empty()) {
			auto it = s.begin();
			int l = it->first, r = it->second;
			s.erase(it);
			int diff = r - l;
			if(diff < 0) {
				continue;
			}
			int div = l + diff / 2;
			vec[div] = cnt++;
			s.insert({l, div - 1});
			s.insert({div + 1, r});
		}
		for(int i = 0; i < n; ++i) {
			cout << vec[i] << ' ';
		}
		cout << '\n';
	}
	return 0;
}