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

class ufds {
public:
	vector<int> p;
	int n;
	ufds(int num) : n(num) {
		p.resize(n);
		iota(p.begin(), p.end(), 0);
	}
	int findSet(int i) {
		return (p[i] == i)? i: p[i] = findSet(p[i]);
	}
	bool unionSet(int i, int j) {
		i = findSet(i);
		j = findSet(j);
		if(i == j) return false;
		p[j] = i;
		return true;
	}
};

int solve(int n) {
	vector<pair<int, pii>> vec;
	for(int i = 0; i < n; ++i) {
		for(int j = i + 1; j < n; ++j) {
			vec.push_back({(i ^ j), {i, j}});
		}
	}
	ufds uf(n);
	sort(all(vec));
	int ret = 0;
	for(int i = 0; i < sz(vec); ++i) {
		int val = vec[i].fi;
		int s1 = vec[i].se.fi;
		int s2 = vec[i].se.se;
		if(uf.findSet(s1) == uf.findSet(s2)) {
			continue;
		}
		ret += val;
		uf.unionSet(s1, s2);
	}
	return ret;
}

const int lim = 100;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	for(int i = 2; i <= lim; ++i) {
		// cout << solve(i) - solve(i - 1) << ",";
		cout << i << ": " << solve(i) << "  +" << solve(i) - solve(i - 1) << '\n';
	}
	return 0;
}